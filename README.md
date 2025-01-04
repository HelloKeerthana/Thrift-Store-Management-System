**#Thrift Store Management System**
**##Overview**
**This project implements a Thrift Store Management System in C++.**
**The system allows users to:**

Manage an inventory of items.
Handle purchases.
Track total revenue.
It provides functionalities such as:

Listing items.
Adding items with unique IDs.
Removing items.
Buying items with proper billing.
Features
Add Items: Add new items to the inventory with unique IDs.
Remove Items: Remove items from the inventory by specifying their ID.
List Items: View all items currently in the inventory.
Buy Items: Purchase items, generate a bill, and update inventory quantities.
Total Revenue: Track the total revenue generated from purchases.

**Functionalities**
Inventory Management
Items in the inventory have the following properties:
ID (unique)
Name
Price
Quantity
Prevents duplicate IDs during item addition.
Transaction Handling
Allows customers to purchase items.
Checks for sufficient stock before completing a purchase.
Generates an itemized bill for each transaction.
Updates inventory quantities after a purchase.
Tracks total revenue.

**Usage Instructions**
**Menu Options**

List Items: Displays all items in the inventory.
Add Item: Prompts for item details (ID, name, price, quantity) and adds it to the inventory. Ensures the ID is unique.
Remove Item: Removes an item by its ID if it exists.
Buy Item: Prompts for item ID and quantity, generates a bill, updates inventory, and adds to the total revenue.
Show Total Revenue: Displays the total revenue generated from all purchases.
Exit: Exits the program.

**Sample Interaction**

Thrift Store Management System  
1. List Items  
2. Add Item  
3. Remove Item  
4. Buy Item  
5. Show Total Revenue  
0. Exit  

Enter your choice: 2  
Enter Item ID: 101  
Enter Item Name: Jacket  
Enter Item Price: 50.00  
Enter Item Quantity: 20  
Item added successfully.  

Enter your choice: 1  
Current Items in Inventory:  
ID: 101, Name: Jacket, Price: $50.00, Quantity: 20  

Enter your choice: 4  
Enter Item ID to buy: 101  
Enter Quantity to buy: 2  

**--- Bill ---**  
**Item: Jacket**  
**Quantity Purchased: 2**  
**Unit Price: $50.00**  
**Total Amount: $100.00**  
---------------  
**Thank you for your purchase!**  

Enter your choice: 5  
Total Revenue: $100.00 


**File Structure**

Main Program: Contains the main() function and user interaction menu.
Item Class: Represents individual items with attributes and methods.
Inventory Class: Manages the collection of items and inventory operations.
Transaction Class: Handles purchase operations and revenue tracking.

