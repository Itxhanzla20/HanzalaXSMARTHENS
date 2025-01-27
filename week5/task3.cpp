#include <iostream>
#include <string>
using namespace std;
string ZodiacSign(int day, string month);
int main()
{
    int day;
    string month;
    cout << "Enter the date of birth : ";
    cin >> day;
    cout << "Enter the month(e.g.,January, February) : ";
    cin >> month;
    cout << "Zodiac sign : " << ZodiacSign(day, month);

    return 0;
}
string ZodiacSign(int day, string month)
{
    if ((month == "March" && day >= 21) || (month == "April" && day <= 19))
        return "Aries";

    else if ((month == "April" || month == "april" && day >= 20) || (month == "May" || month == "may" && day <= 20))
        return "Tauras";
    else if ((month == "May" || month == "may" && day >= 21) || (month == "June" || month == "june" && day <= 20))
        return "Gemini";
    else if ((month == "june" || month == "June" && day >= 21) || (month == "July" || month == "july" && day <= 22))
        return "Cancer";
    else if ((month == "July" || month == "July" && day >= 23) || (month == "August" || month == "august" && day <= 22))
        return "Leo";
    else if ((month == "August" || month == "august" && day >= 23) || (month == "September" || month == "september" && day <= 22))
        return "Virgo";
    else if ((month == "September" || month == "september" && day >= 23) || (month == "October" || month == "october" && day <= 22))
        return "Libra";
    else if ((month == "October" || month == "october" && day >= 23) || (month == "November" || month == "november" && day <= 21))
        return "Scorpio";
    else if ((month == "November" || month == "november" && day >= 22) || (month == "December" || month == "december" && day <= 21))
        return "Sagittarius";
    else if ((month == "December" || month == "december" && day >= 22) || (month == "January" || month == "january" && day <= 19))
        return "Capricorn";
    else if ((month == "January" || month == "january" && day >= 20) || (month == "Februay" || month == "februay" && day <= 18))
        return "Aquarius";
    else if ((month == "Februay" || month == "februay" && day >= 19) || (month == "March" || month == "march" && day <= 20))
        return "Pisces";
    else
        return "invalid Input!!";
}