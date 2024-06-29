# Inventory-Management-System
# Inventory Management System

## Overview

The Inventory Management System is a console-based application developed in C++. This system enables the administration, shopkeepers, and customers to interact with the inventory, manage products, and process transactions. The application provides functionality for user registration, product management, and purchase processing.

## Features

### Administrator Module
- **Add Shopkeeper**: Register new shopkeepers with the system.
- **Add Customer**: Register new customers with the system.
- **Add Product**: Add new products to the inventory.
- **Edit Shopkeeper Details**: Update existing shopkeeper information.
- **Edit Customer Details**: Update existing customer information.
- **Edit Product Details**: Update details of existing products.
- **Delete Shopkeeper**: Remove a shopkeeper from the system.

### Shopkeeper Module
- **Registration**: Register new shopkeepers.
- **Add Product**: Add new products to the inventory.
- **Edit Product**: Update details of existing products.

### Customer Module
- **Registration**: Register new customers.
- **Purchase Product**: Select and purchase products from the inventory.
- **Add to Cart**: Add products to the shopping cart.
- **Checkout**: Finalize purchases and provide shipment details.

## Installation

1. **Clone the repository**
   ```sh
   git clone https://github.com/your-username/inventory-management-system.git
   ```

2. **Navigate to the project directory**
   ```sh
   cd inventory-management-system
   ```

3. **Compile the program**
   ```sh
   g++ -o inventory_management_system main.cpp
   ```

4. **Run the executable**
   ```sh
   ./inventory_management_system
   ```

## File Structure

- **main.cpp**: The main source code file containing the program logic.
- **shopkeeper.txt**: File to store shopkeeper details.
- **customerr.txt**: File to store customer details.
- **products.txt**: File to store product details.
- **pass.txt**: File to store admin credentials.
- **shopkeeperPass.txt**: File to store shopkeeper credentials.
- **customerPass.txt**: File to store customer credentials.
- **prod.txt**: File to store cart details.

## Usage

1. **Run the program**: Execute the compiled program.
2. **Select module**: Choose the module type (Admin, Shopkeeper, Customer).
3. **Login**: Enter the username and password for the chosen module.
4. **Perform actions**: Depending on the module, perform actions like adding, editing, and deleting shopkeepers, customers, and products.
5. **Exit**: Exit the module and return to the main menu or close the application.

## Notes

- Ensure all required text files (e.g., `shopkeeper.txt`, `customerr.txt`, `products.txt`) are present in the directory.
- Use valid credentials stored in the respective text files for logging in.
