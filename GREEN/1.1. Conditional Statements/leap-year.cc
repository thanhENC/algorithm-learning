#include <iostream>
#include <string>
using namespace std;

// Function declaration
bool isLeapYear(int year);

int main()
{

    // get input a year from user
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // check if year is a leap year or not
    if (isLeapYear(year))
    {
        cout << "The year that you just input is a leap year! (" << year << ")" << endl;
    }
    else
    {
        cout << "The year that you just input is not a leap year! (" << year << ")" << endl;
    }    

    return 0;
}

// Function definition
bool isLeapYear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    else
    {
        if (year % 4 == 0 && year % 100 != 0)
        {
            return true;
        }
        return false;
    }
}