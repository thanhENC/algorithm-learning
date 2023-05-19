#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;


// declare functions
bool isPrime(int number);

int main()
{

    bool stop = false;
    int num = 0;
    string userWannaContinue = "";

    while (!stop)
    {
        cout << "Input a number to check if it is prime number or not: ";
        cin >> num;

        string result = isPrime(num) ? "Yes, it is prime number." : "No, it is not a prime number.";
        cout << result << endl;

        cout << "Continue [Y]es or [N]o: ";
        cin >> userWannaContinue;        

        transform(userWannaContinue.begin(), userWannaContinue.end(), userWannaContinue.begin(), ::toupper);
        stop = userWannaContinue != "Y";

        cout << "----------" << endl;
        cin.get();
    }

    cout << "STOPPED" << endl;
    cin.get();

    return 0;
}

// define functions
bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}