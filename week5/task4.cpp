#include <iostream>
using namespace std;
void telphon_service(char service, char time, float min);

int main()
{
    char service, time;
    float min;
    cout << "Enter the service code(R for regular and P for premium): ";
    cin >> service;
    if (service != 'P' && service != 'R')
    {
        cout << "error ";
        return 0;
    }

    cout << "Enter the numer of minutes ";
    cin >> min;
    if (service == 'P')
    {
        cout << "Service type: PREMIUM" << endl;
    }
    if (service == 'R')
    {
        cout << "Service type: REGULAR" << endl;
    }

    cout << "Total minutes: " << min << endl;

    telphon_service(service, time, min);
    return 0;
}
void telphon_service(char service, char time, float min)
{
    float n;

    if (service == 'R')
    {
        if (min <= 50)
        {
            cout << "AMOUNT DUE: 10$";
        }
        if (min > 50)
        {
            n = 10 + (min - 50) * 0.2;
            cout << "AMOUNT DUR: " << n << "$";
        }
    }
    if (service == 'P')

    {

        cout << "Enter the time(D for day and N for night): ";
        cin >> time;
        if (time == 'D')
        {
            if (min <= 75)
            {
                cout << "AMOUNT DUE: 25$";
            }
            if (min > 75)
            {
                n = 25 + (min - 75) * 0.1;

                cout << "AMOUNT DUE: " << n << "$";
            }
        }
        if (time == 'N')
        {
            if (min <= 100)
            {
                cout << "AMOUNT DUE: 25$";
            }
            if (min > 100)
            {
                n = 25 + (min - 100) * 0.05;

                cout << "AMOUNT DUE: " << n << "$";
            }
        }
    }
}
