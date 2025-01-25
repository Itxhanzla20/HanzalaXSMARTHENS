#include <iostream>
using namespace std;
void same_check(int n1, int n2, int n3);
int main()
{
    int number1, number2, number3;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    cout << "Enter second number:";
    cin >> number3;
    same_check(number1, number2, number3);
    return 0;
}
void same_check(int n1, int n2, int n3)
{
    if (n1 == n2)
    {
        if (n1 == n3)
            cout << "Same";
        else
            cout << "Different";
    }
    else
        cout << "Different";
}