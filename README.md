<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Thrift Store Management System</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f9;
            color: #333;
            margin: 0;
            padding: 20px;
        }

        h1 {
            text-align: center;
            color: #4CAF50;
        }

        h2 {
            color: #555;
        }

        .section {
            margin-bottom: 20px;
        }

        .code-box {
            background-color: #eee;
            padding: 15px;
            border-radius: 5px;
            font-family: monospace;
            white-space: pre-wrap;
            word-wrap: break-word;
        }

        .list-items, .usage {
            background-color: #fff;
            border-radius: 8px;
            padding: 20px;
            box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
        }

        .list-items ul, .usage ul {
            list-style-type: none;
            padding-left: 0;
        }

        .list-items li, .usage li {
            padding: 8px;
            font-size: 16px;
            border-bottom: 1px solid #ddd;
        }

        .list-items li:last-child, .usage li:last-child {
            border-bottom: none;
        }

        .btn {
            padding: 10px 15px;
            background-color: #4CAF50;
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            text-align: center;
        }

        .btn:hover {
            background-color: #45a049;
        }

        .sample-interaction {
            background-color: #f9f9f9;
            border-left: 5px solid #4CAF50;
            padding: 15px;
            margin-top: 20px;
        }
    </style>
</head>
<body>

    <h1>Thrift Store Management System</h1>

    <div class="section">
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
    </div>

    <div class="section list-items">
        <h2>Functionalities</h2>
        <p>Inventory Management</p>
        <ul>
            <li>Items in the inventory have the following properties:
                <ul>
                    <li>ID (unique)</li>
                    <li>Name</li>
                    <li>Price</li>
                    <li>Quantity</li>
                </ul>
            </li>
            <li>Prevents duplicate IDs during item addition.</li>
        </ul>

        <p>Transaction Handling</p>
        <ul>
            <li>Allows customers to purchase items.</li>
            <li>Checks for sufficient stock before completing a purchase.</li>
            <li>Generates an itemized bill for each transaction.</li>
            <li>Updates inventory quantities after a purchase.</li>
            <li>Tracks total revenue.</li>
        </ul>
    </div>

    <div class="section usage">
        <h2>Usage Instructions</h2>
        <p>Menu Options:</p>
        <ul>
            <li>List Items</li>
            <li>Add Item</li>
            <li>Remove Item</li>
            <li>Buy Item</li>
            <li>Show Total Revenue</li>
            <li>Exit</li>
        </ul>

        <p>Sample Interaction:</p>
        <div class="sample-interaction">
            <p><strong>Thrift Store Management System</strong></p>
            <p>1. List Items</p>
            <p>2. Add Item</p>
            <p>3. Remove Item</p>
            <p>4. Buy Item</p>
            <p>5. Show Total Revenue</p>
            <p>0. Exit</p>
            <p><strong>Enter your choice:</strong> 2</p>
            <p>Enter Item ID: 101</p>
            <p>Enter Item Name: Jacket</p>
            <p>Enter Item Price: $50.00</p>
            <p>Enter Item Quantity: 20</p>
            <p>Item added successfully.</p>
            <p><strong>Enter your choice:</strong> 1</p>
            <p><strong>Current Items in Inventory:</strong></p>
            <p>ID: 101, Name: Jacket, Price: $50.00, Quantity: 20</p>
            <p><strong>Enter your choice:</strong> 4</p>
            <p>Enter Item ID to buy: 101</p>
            <p>Enter Quantity to buy: 2</p>
            <p><strong>--- Bill ---</strong></p>
            <p>Item: Jacket</p>
            <p>Quantity Purchased: 2</p>
            <p>Unit Price: $50.00</p>
            <p>Total Amount: $100.00</p>
            <p>---------------</p>
            <p>Thank you for your purchase!</p>
            <p><strong>Enter your choice:</strong> 5</p>
            <p>Total Revenue: $100.00</p>
        </div>
    </div>

    <div class="section">
        <h2>File Structure</h2>
        <ul>
            <li>Main Program: Contains the main() function and user interaction menu.</li>
            <li>Item Class: Represents individual items with attributes and methods.</li>
            <li>Inventory Class: Manages the collection of items and inventory operations.</li>
            <li>Transaction Class: Handles purchase operations and revenue tracking.</li>
        </ul>
    </div>

    <div class="section">
        <button class="btn">Start Application</button>
    </div>

</body>
</html>
