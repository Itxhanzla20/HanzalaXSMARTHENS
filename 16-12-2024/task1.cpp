#include <iostream>
using namespace std;
float Pyramid_Volume(int x, int y, int z, string unit);
int main()
{
    int lenght, width, height;
    float result;
    string unit;
    cout << "Enter the lenght of pyramid(meters)";
    cin >> lenght;
    cout << "Enter the width of pyramid(meters)";
    cin >> width;
    cout << "Enter the height of pyramid(meters)";
    cin >> height;
    cout << "Enter then desired output unit(meters),(centimeters),(kilometers),(milimeters)";
    cin >> unit;
    result = Pyramid_Volume(lenght, width, height, unit);
    cout << result << " Cubic " << unit;
    return 0;
}
float Pyramid_Volume(int x, int y, int z, string unit)
{
    if (unit == "meters")
        return x * y * z / 3;
    else if (unit == "centimeters")
        return x * y * z / 3 * 1000000;
    else if (unit == "milimeters")
        return ((x * y * z) / 3) * 1000000000;
    else if (unit == "kilometers")
        return x * y * z / 3 / 1000000000;
}