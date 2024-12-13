#include <iostream>
using namespace std;
int largest(int n);
int main()
{
    int n, max;
   
    max = largest(n);
    cout <<"Largest number is " <<max;
    return 0;
}
int largest(int n)
{
    int large = 0;
    cout << "Enter number(-1) to exit:";
    cin >> n;
    while (n)
    { cout << "Enter number(-1) to exit:";
    cin >> n;
       
        if (n > large)
            large = n;
             if (n == -1)
            break;
    }
    return large;
}