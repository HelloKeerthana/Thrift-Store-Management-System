#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Item class to store individual item details
class Item {
private:
    int id;
    string name;
    double price;
    int quantity;

public:
    Item(int id, const string &name, double price, int quantity) 
        : id(id), name(name), price(price), quantity(quantity) {}

    int getId() const { return id; }
    string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }

    void setQuantity(int newQuantity) { quantity = newQuantity; }

    void display() const {
        cout << "ID: " << id << ", Name: " << name 
             << ", Price: $" << price << ", Quantity: " << quantity << endl;
    }
};

// Inventory class to manage the collection of items
class Inventory {
private:
    vector<Item> items;

public:
    // Method to add an item to the inventory
  void addItem(const Item &item) {
    items.push_back(item); // Add the new item
}

    // Method to remove an item by ID
    bool removeItem(int id) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getId() == id) {
                items.erase(it);
                cout << "Item with ID " << id << " removed successfully.\n";
                return true; // Item removed successfully
            }
        }
        cout << "Item with ID " << id << " not found.\n";
        return false; // Item not found
    }

    // Method to list all items in the inventory
    void listItems() const {
        if (items.empty()) {
            cout << "Inventory is empty.\n";
            return;
        }
        cout << "Current Items in Inventory:\n";
        for (const auto &item : items) {
            item.display();
        }
    }

    // Method to find an item by ID
    Item* findItemById(int id) {
        for (auto &item : items) {
            if (item.getId() == id) {
                return &item;
            }
        }
        return nullptr; 
    }
};

// Transaction class to handle purchases
class Transaction {
private:
    Inventory &inventory;
    double totalRevenue;

public:
    Transaction(Inventory &inventory) : inventory(inventory), totalRevenue(0.0) {}

    void buyItem(int id, int quantity) {
        Item* item = inventory.findItemById(id);
        if (!item) {
            cout << "Item not found.\n";
            return;
        }
        if (item->getQuantity() < quantity) {
            cout << "Not enough stock available.\n";
            return;
        }

        double purchaseAmount = item->getPrice() * quantity;
        totalRevenue += purchaseAmount;
        item->setQuantity(item->getQuantity() - quantity);

        // Generate the bill
        cout << "\n--- Bill ---\n";
        cout << "Item: " << item->getName() << "\n";
        cout << "Quantity Purchased: " << quantity << "\n";
        cout << "Unit Price: $" << fixed << setprecision(2) << item->getPrice() << "\n";
        cout << "Total Amount: $" << fixed << setprecision(2) << purchaseAmount << "\n";
        cout << "---------------\n";
        cout << "Thank you for your purchase!\n";
    }

    double getTotalRevenue() const {
        return totalRevenue;
    }
};

// Main function
int main() {
    Inventory inventory;
    Transaction transaction(inventory);
    int choice, id, quantity;
    string name;
    double price;

    // Adding initial items to the inventory
    inventory.addItem(Item(1, "Shirt", 10.0, 20));
    inventory.addItem(Item(2, "Pants", 15.0, 10));
    inventory.addItem(Item(3, "Shoes", 25.0, 15));
    inventory.addItem(Item(4, "Sweaters", 30.0, 28));
    inventory.addItem(Item(5, "Hoodies", 15.0, 50));
    inventory.addItem(Item(6, "Shorts", 10.0, 30));
    inventory.addItem(Item(7, "Baggy Pants", 25.0, 35));
    inventory.addItem(Item(8, "Unisex Suits", 50.0, 27));
    
    do {
        cout << "\nThrift Store Management System\n";
        cout << "1. List Items\n";
        cout << "2. Add Item\n";
        cout << "3. Remove Item\n";
        cout << "4. Buy Item\n"; // Changed from Sell to Buy
        cout << "5. Show Total Revenue\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // List all items in inventory
                inventory.listItems();
                break;
            case 2:
            // Add a new item
            cout << "Enter Item ID: ";
            cin >> id;
        
            // Check if the ID already exists in the inventory
            if (inventory.findItemById(id)) {
                cout << "Error: Item ID already exists. Please use a unique ID.\n";
            } else {
                cout << "Enter Item Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Item Price: ";
                cin >> price;
                cout << "Enter Item Quantity: ";
                cin >> quantity;
        
                // Add the item if the ID is valid and unique
                inventory.addItem(Item(id, name, price, quantity));
                cout << "Item added successfully.\n";
            }
            break;
            case 3:
                // Remove an item by ID
                cout << "Enter Item ID to remove: ";
                cin >> id;
                inventory.removeItem(id);
                break;
            case 4:
                // Buy an item
                cout << "Enter Item ID to buy: ";
                cin >> id; // Only need to enter the ID once
                cout << "Enter Quantity to buy: ";
                cin >> quantity;
                transaction.buyItem(id, quantity); // Use the ID directly
                break;
            case 5:
                // Show total revenue
                cout << "Total Revenue: $" << fixed << setprecision(2) << transaction.getTotalRevenue() << endl;
                break;
            case 0:
                cout << "Exiting the system. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}