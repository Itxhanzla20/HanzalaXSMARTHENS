#include <iostream>
using namespace std;
int disc_calculator(string day, string month, int amount);
int main()
{
    string day, month;
    int amount, discount;
    cout << "Enter the day:";
    cin >> day;
    cout << "Enter the month:";
    cin >> month;
    cout << "Enter the amount:";
    cin >> amount;
    discount = disc_calculator(day, month, amount);
    cout << amount - discount;
    return 0;
}
int disc_calculator(string day, string month, int amount)
{
    int disc;
    if (day == "sunday" && month == "october")
        disc = 10 * amount / 100;
    return disc;
    if (day == "sunday" && month != "october")
        disc = 5 * amount / 100;
    return disc;
    if (day != "sunday")
        disc = 0;
    return disc;
}       