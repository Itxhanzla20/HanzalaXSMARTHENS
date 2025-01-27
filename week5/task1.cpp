#include <iostream>
using namespace std;
void decide(string temp, string hum);

int main()
{
    string temperature, humididty;
    cout << "Enter the temperature:";
    cin >> temperature;
    cout << "Enter the humidity: ";
    cin >> humididty;
    decide(temperature, humididty);
    return 0;
}
void decide(string temp, string hum)
{
    if (temp == "warm" && hum == "dry")
        cout << "Play Tennis";
    if (temp == "warm" && hum == "humid")
        cout << "swim";
    if (temp == "cold" && hum == "dry")
        cout << "Play Basketball";
    if (temp == "cold" && hum == "humid")
        cout << "Watch TV";
}
