#include <iostream>
using namespace std;
int perimeter_calculate(char letter, int num);

int main()
{
    char shape;
    int number, ans;
    cout << "ENter th shape(s for square,t for triangle,c for circle,h for hexagon) ";
    cin >> shape;
    cout << "Enter the number ";
    cin >> number;
    ans = perimeter_calculate(shape, number);
    cout << "perimeter of shape " << shape << " is " << ans;
    return 0;
}
int perimeter_calculate(char letter, int num)
{
    int perimeter;
    if (letter == 's')
        perimeter = 4 * num;
    if (letter == 'c')
        perimeter = 6.28 * num;
    if (letter == 't')
        perimeter = 3 * num;
    if (letter == 'h')
        perimeter = 6 * num;
    return perimeter;
}