#include <iostream>
using namespace std;

float calculate_price(string fruit, string week, float quantity);

int main()
{
    string fruit, week;
    float quantity;

    cout << "Enter the name of fruit: ";
    cin >> fruit;
    if (fruit != "banana" && fruit != "apple" && fruit != "orange" && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes")
    {
        cout << "Invalid Fruit name";
        return 0;
    }

    cout << "Enter the day of the week(e.g monday,tuesday ..): ";
    cin >> week;
    if (week != "monday" && week != "tuesday" && week != "wednesday" && week != "thursday" && week != "friday" && week != "saturday" && week != "sunday")
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter the quantity: ";
    cin >> quantity;

    calculate_price(fruit, week, quantity);

    return 0;
}

float calculate_price(string fruit, string week, float quantity)
{
    float price;

    {
        if (week == "sunday" || week == "saturday")
        {
            if (fruit == "banana")
            {
                 price = quantity * 2.7;
                cout << "the total will be: " <<  price;
            }
            if (fruit == "apple ")
            {
                price = quantity * 1.25;
                cout << "the total will be: " << price;
            }
            if (fruit == "orange")
            {
                price = quantity * 0.9;
                cout << "the total will be: " << price;
            }
            if (fruit == "grapefruit")
            {
               price= quantity * 1.6;
                cout << "the total will be: " <<  price;
            }
            if (fruit == "kiwi")
            {
               price = quantity * 3;
                cout << "the total will be: " << price;
            }
            if (fruit == "pineapple")
            {
                price = quantity * 5.6;
                cout << "the total will be: " << price;
            }
            if (fruit == "grapes")
            {
                price= quantity * 4.2;
                cout << "the total will be: " << price;
            }
            return 0;
        }
    }
    if (fruit == "banana")
    {
        price = quantity * 2.5;
        cout << "the total will be: " <<  price;
    }
    if (fruit == "apple")
    {
        price= quantity * 1.2;
        cout << "the total will be: " << price;
    }
    if (fruit == "orange")
    {
        price = quantity * 0.85;
        cout << "the total will be: " << price;
    }
    if (fruit == "grapefruit")
    {
        price = quantity * 1.45;
        cout << "the total will be: " <<  price;
    }
    if (fruit == "kiwi")
    {
        price= quantity * 2.7;
        cout << "the total will be: " << price;
    }
    if (fruit == "pineapple")
    {
         price = quantity * 5.5;
        cout << "the total will be: " << price;
    }
    if (fruit == "grapes")
    {
         price= quantity * 3.8;
        cout << "the total will be: " <<  price;
    }
    return 0;
}