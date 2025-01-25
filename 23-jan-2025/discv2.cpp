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
    if (day == "sunday" || day == "monday")
        if (month == "october")
        {
            disc = 10 * amount / 100;
            return disc;
        }
        else
            disc = 0;
    return disc;
}