#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/*
1. menu
2. user registration (sign up)
3. user login (sign in)
4. Exit
5. input validation
*/

// User-related arrays

string users[100] = {"hello", "hanzala", "ABDULLAH AMEEN", "abdullah jamsahid", "Abdul Hadi"};
string passwords[100] = {"123", "1234", "1232", "12323", "21412"};
string user, password;
string menuItems[100] = {
    "Espresso", "Latte", "Cappuccino", "Americano", "Mocha",
    "Flat White", "Macchiato", "Cortado", "Affogato", "Irish Coffee",
    "Turkish Coffee", "Cold Brew", "Nitro Coffee", "Iced Latte", "Frappuccino",
    "Chai Latte", "Matcha Latte", "Hot Chocolate", "Caramel Macchiato", "Vanilla Latte"};

double itemPrices[100] = {
    2.5, 3.0, 3.5, 2.0, 3.8,
    3.2, 2.8, 3.3, 4.0, 4.5,
    3.7, 3.1, 4.8, 3.6, 4.2,
    3.4, 4.1, 2.9, 3.9, 3.7};

int stockQuantities[100] = {
    10, 15, 8, 12, 5,
    10, 7, 9, 4, 6,
    8, 11, 5, 14, 13,
    10, 7, 12, 8, 6};

int totalMenuItems = 20;

int visitCounts[100] = {0};
int totalUsers = 5;
int userIndex = 0;

// Order-related arrays
string orderCustomers[100];
double orderPrices[100];
int totalOrders = 0;

// Function declarations
void Menu();
void signUp(string user, string password);
bool signIn(string user, string password);
void validationsignin();
bool isUserPresent(string user);
bool isAdmin(string user, string password);
void isuser();
void editCustomer(int index);
void viewAllCustomers();
void userManagement();
void orderManagement();
void viewAllOrders();
void addNewOrder();
void inventory();
void viewitems();
void additems();
void delitems();
// Main function
int main()
{
    cout << "Welcome to the Sign In/Sign Up page!" << endl;

    int choice;
    do
    {
        Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Sign Up
            cout << "Sign Up" << endl;
            cout << "Enter your email: ";
            cin >> user;
            cout << "Enter your password: ";
            cin >> password;

            if (isUserPresent(user))
            {
                cout << "User already exists" << endl;
                break;
            }
            else
            {
                signUp(user, password);
            }
            break;
        case 2:
            // Sign In
            validationsignin();

            choice = 3; // Exit after sign in
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        getch();
        system("cls");
    } while (choice != 3);

    return 0;
}

// User registration functions
void signUp(string user, string password)
{
    users[totalUsers] = user;
    passwords[totalUsers] = password;
    totalUsers++;
}

bool signIn(string user, string password)
{
    if (isAdmin(user, password))
    {
        return true;
    }
    for (int i = 0; i < totalUsers; i++)
    {
        if (users[i] == user)
        {
            if (passwords[i] == password)
            {
                cout << "Welcome " << users[i] << endl;
                isuser();
                return true;
            }
        }
    }
    cout << "Invalid user or password" << endl;

    validationsignin();

    return false;
}

bool isUserPresent(string user)
{
    for (int i = 0; i < totalUsers; i++)
    {
        if (users[i] == user)
        {
            return true;
        }
    }
    return false;
}

void Menu()
{
    cout << "1. Sign Up" << endl;
    cout << "2. Sign In" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

// Admin check function
bool isAdmin(string email, string password)
{
    system("cls");

    if (email == "admin" && password == "1234")
    {
        int choice;
        cout << "Welcome Admin :))\n";
        cout << "1. USER MANAGEMENT\n";
        cout << "2. ORDER MANAGEMENT\n";
        cout << "3. INVENTORY MANAGEMENT\n";
        cout << "4. DISCOUNTS AND OFFERS MANAGEMENT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            userManagement();
        }
        else if (choice == 2)
        {
            orderManagement();
        }
        else if (choice == 3)
        {
            inventory();
        }

        else
        {
            cout << "Feature not implemented yet.\n";
        }

        return true;
    }
    else
    {
        return false;
    }
}

// User menu (non-admin)
void isuser()
{
reenter:
    int choice;
    cout << "1. ACCOUNT MANAGEMENT\n";
    cout << "2. MENU EXPLORATION\n";
    cout << "3. DINE IN OR TAKEAWAY\n";
    cout << "4. THANK YOU FEEL FREE TO GIVE ANY SUGGESTIONS\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "work in progress";
        break;
    case 2:
        cout << "work in progress";
        break;
    case 3:
        cout << "work in progress";
        break;
    case 4:
        cout << "work in progress";
        break;
    default:
        system("cls");
        cout << "invalid choice\n";
        goto reenter;
        break;
    }
}

// User Management menu
void userManagement()
{
    int option;

    do
    {
        cout << "\n--- USER MANAGEMENT MENU ---\n";
        cout << "1. View All Customers\n";
        cout << "2. Edit Customer Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
            viewAllCustomers();
            break;
        case 2:
            cout << "Enter customer number (1-" << totalUsers << "): ";
            cin >> userIndex;

            if (userIndex >= 1 && userIndex <= totalUsers)
            {
                editCustomer(userIndex - 1);
            }
            else
            {
                cout << "Invalid user number!\n";
            }
            break;
        case 3:
            cout << "Exiting User Management...\n";
            isAdmin(user, password);
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (option != 3);
}

void viewAllCustomers()
{
    cout << "\n--- User List ---\n";
    for (int i = 0; i < totalUsers; i++)
    {
        cout << i + 1 << ". " << users[i] << " (Visits: " << visitCounts[i] << ")\n";
    }
    cout << "---------------------\n";
}

void editCustomer(int index)
{
    cout << "Enter new email: ";
    cin >> users[index];

    cout << "Customer details updated successfully!\n";
}

// Order Management System
void orderManagement()
{
    int option;

    do
    {
        cout << "\n--- ORDER MANAGEMENT MENU ---\n";
        cout << "1. Add New Order\n";
        cout << "2. View All Orders\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
            addNewOrder();
            break;
        case 2:
            viewAllOrders();
            break;
        case 3:
            cout << "Exiting Order Management...\n";
            isAdmin(user, password);
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (option != 3);
}

void addNewOrder()
{
    cout << "Enter customer name: ";
    cin >> orderCustomers[totalOrders];

    cout << "Enter total price: $";
    cin >> orderPrices[totalOrders];

    totalOrders++;
}

void viewAllOrders()
{
    cout << "\n--- All Orders ---\n";
    for (int i = 0; i < totalOrders; i++)
    {
        cout << "Order #" << i + 1 << " | Customer: " << orderCustomers[i];
        cout << " | Total Price: $" << orderPrices[i] << endl;
    }
    cout << "---------------------\n";
}
void validationsignin()
{
    cout << "Sign In" << endl;
    cout << "Enter your username: ";
    cin >> user;
    cout << "Enter your password: ";
    cin >> password;

    signIn(user, password);
}
void inventory()
{

    int opt;
    cout << "\n---INVENTORY MANGEMENT ---\n";

    cout << "1. View All Items\n";
    cout << "2. Add New Items\n";
    cout << "3. Deleting  Items\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> opt;
    switch (opt)
    {
    case 1:
        viewitems();
        break;
    case 2:
        additems();
        break;
    case 3:
        delitems();
        break;
    case 4:
        cout << "Exiting....\n";
        getch();
        system("cls");

        isAdmin(user, password);

        break;

    default:
        cout << "Invalid Choice";
        inventory();
        break;
    }
}
void viewitems()
{
    cout << "-----TOtal menu items-----\n";
    for (int i = 0; i < totalMenuItems; i++)
    {
        cout << i + 1 << "." << menuItems[i] << endl;
    }
    getch();
    inventory();
}
void additems()
{
    string item;
    cout << "Enter the name of item:";
    cin >> item;
    menuItems[totalMenuItems] = item;
    totalMenuItems++;
    getch();
    inventory();
}
void delitems()
{
    int index;
    // view item
    cout << "-----TOtal menu items-----\n";
    for (int i = 0; i < totalMenuItems; i++)
    {
        cout << i + 1 << "." << menuItems[i] << endl;
    }
    do
    {
        cout << "\nEnter the index of item u want to delete(1- " << totalMenuItems << "): ";
        cin >> index;
        if (index < 0 || index > totalMenuItems)
        {
            cout << "Invalid write again.";
        }

    } while (index < 0 || index > totalMenuItems);

    for (int i = index - 1; i < totalMenuItems; i++)
    {
        menuItems[i] = menuItems[i + 1];
    }
    totalMenuItems--;
    cout << "----UPDATED MENU ITEMS" << endl;
    //    updated items
    cout << "-----TOtal Menu Items-----\n";
    for (int i = 0; i < totalMenuItems; i++)
    {
        cout << i + 1 << "." << menuItems[i] << endl;
    }
    cout << "\nThe remaining number of items: " << totalMenuItems;
    getch();
    inventory();
}
// void discount(){
    
// }