#include <iostream>
using namespace std;
void speed_check(int speed);
int main()
{
    int speed;
    cout << "Enter the speed:";
    cin >> speed;
    speed_check(speed);
    return 0;
}
void speed_check(int speed)
{
    if (speed <= 10)
        cout << "Slow";
    if (speed > 10 && speed <= 50)
        cout << "Average";
    if (speed > 50 && speed <= 150)
        cout << "Fast";
    if (speed > 150 && speed <= 1000)
        cout << "Ultra fast";
}