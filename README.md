<h1>Thrift Store Management System</h1>

<h2>Overview</h2>
<p>This project implements a Thrift Store Management System in C++. The system allows users to:</p>
<ul>
    <li>Manage an inventory of items.</li>
    <li>Handle purchases.</li>
    <li>Track total revenue.</li>
</ul>
<p>It provides functionalities such as:</p>
<ul>
    <li>Listing items.</li>
    <li>Adding items with unique IDs.</li>
    <li>Removing items.</li>
    <li>Buying items with proper billing.</li>
</ul>

<h2>Features</h2>
<h3>Add Items</h3>
<ul>
    <li>Add new items to the inventory with unique IDs.</li>
</ul>

<h3>Remove Items</h3>
<ul>
    <li>Remove items from the inventory by specifying their ID.</li>
</ul>

<h3>List Items</h3>
<ul>
    <li>View all items currently in the inventory.</li>
</ul>

<h3>Buy Items</h3>
<ul>
    <li>Purchase items, generate a bill, update inventory quantities, and track total revenue.</li>
</ul>

<h3>Show Total Revenue</h3>
<ul>
    <li>Displays the total revenue generated from all purchases.</li>
</ul>

<h2>Functionalities</h2>

<h3>Inventory Management</h3>
<ul>
    <li>Items in the inventory have the following properties:</li>
    <ul>
        <li>ID (unique)</li>
        <li>Name</li>
        <li>Price</li>
        <li>Quantity</li>
    </ul>
    <li>Prevents duplicate IDs during item addition.</li>
</ul>

<h3>Transaction Handling</h3>
<ul>
    <li>Allows customers to purchase items.</li>
    <li>Checks for sufficient stock before completing a purchase.</li>
    <li>Generates an itemized bill for each transaction.</li>
    <li>Updates inventory quantities after a purchase.</li>
    <li>Tracks total revenue.</li>
</ul>

<h2>Usage Instructions</h2>

<h3>Menu Options</h3>
<ul>
    <li>List Items</li>
    <li>Add Item</li>
    <li>Remove Item</li>
    <li>Buy Item</li>
    <li>Show Total Revenue</li>
    <li>Exit</li>
</ul>

<h3>Sample Interaction</h3>
<pre>
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
Enter Item Price: $50.00
Enter Item Quantity: 20
Item added successfully.

Enter your choice: 1
Current Items in Inventory:
ID: 101, Name: Jacket, Price: $50.00, Quantity: 20

Enter your choice: 4
Enter Item ID to buy: 101
Enter Quantity to buy: 2

--- Bill ---
Item: Jacket
Quantity Purchased: 2
Unit Price: $50.00
Total Amount: $100.00
---------------

Thank you for your purchase!

Enter your choice: 5
Total Revenue: $100.00
</pre>

<h2>File Structure</h2>
<ul>
    <li>Main Program: Contains the main() function and user interaction menu.</li>
    <li>Item Class: Represents individual items with attributes and methods.</li>
    <li>Inventory Class: Manages the collection of items and inventory operations.</li>
    <li>Transaction Class: Handles purchase operations and revenue tracking.</li>
</ul>
