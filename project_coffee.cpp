#include <iostream>
#include <conio.h>
using namespace std;

/*
1. menu
2. user registration (sign up)
3. user login (sign in)
4. Exit
5. input validation
*/

string users[100], passwords[100];
int totalUsers = 0;

void Menu();
void signUp(string user, string password);
bool signIn(string user, string password);
bool isUserPresent(string user);
bool isuseradmin(string user, string password);
void isuser();

int main()
{
    cout << "Welcome to the Sign In/Sign Up page!" << endl;

    int choice;
    do
    {
        Menu();
        cin >> choice;

        string user, password;
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
            cout << "Sign In" << endl;
            cout << "Enter your username: ";
            cin >> user;
            cout << "Enter your password: ";
            cin >> password;

            signIn(user, password);

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

void signUp(string user, string password)
{
    users[totalUsers] = user;
    passwords[totalUsers] = password;
    totalUsers++;
}

bool signIn(string user, string password)
{
    if (user == "admin" && password == "1234")
    {

        isuseradmin(user, password);
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

bool isuseradmin(string email, string password)
{
    int choice;
    cout << "Welcome hanzala:))\n";
    cout << "1.USER MANAGEMENT\n";
    cout << "2.ORDER MANAGEMENT\n";
    cout << "3.INVENTORY MANAGEMENT\n";
    cout << "4.DISCOUNTS AND OFFERS MANAGEMENT\n";
    cout << "Enter your choice :";
    cin >> choice;
    return true;
}
void isuser(){
    int choice;
    cout << "1.ACCOUNT MANAGMENT\n";
    cout << "2.MENU EXPLORATION\n";
    cout << "3.DINE IN OR TAKEAWAY\n";
    cout << "4.THANK YOU FEEL FREE TO GIVE ANY SUGESSTIONS\n";
    cout<<" Enter your choice :\n";
    cin>>choice;
}