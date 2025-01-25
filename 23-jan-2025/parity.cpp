#include <iostream>
using namespace std;
string Parity(int x);
int main()
{
    int num;
    string Ans;
    cout << "Enter any number:";
    cin >> num;
    Ans = Parity(num);
    cout << Ans;
}
string Parity(int no)
{

    int sum = 0, y = no;
    for (int i = 1; y != 0; i++)
    {

        no = y % 10;
        sum = sum + no;
        y = y / 10;
    }
   
    if (no % 2 == 0 && sum % 2 == 0)
        return "true";
   
    else
        return "false";
}