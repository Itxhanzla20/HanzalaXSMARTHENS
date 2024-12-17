#include <iostream>
using namespace std;
float tax_calculator(char x, float y);
int main()
{
    char type;
    float price, Total_amount;
    cout << "Enter the vehicle type(M,E,S,V,T) ";
    cin >> type;
    cout << "Enter the original price ";
    cin >> price;
    Total_amount = price + tax_calculator(type, price);
    cout << "The final price of the vehicle type " << type << " after adding tax is " << Total_amount;
}
float tax_calculator(char x, float y)
{
    float tax_amount;
    if (x == 'M')
        return y * 6 / 100;
    else if (x == 'E')
        return y * 8 / 100;
    else if (x == 'S')
        return y * 10 / 100;
    else if (x == 'V')
        return y * 12 / 100;
    else if (x == 'T')
        return y * 15 / 100;
}