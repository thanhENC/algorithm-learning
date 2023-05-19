#include <iostream>
#include <math.h>
using namespace std;

// declare function
int UCLN(int a, int b);
int BCNN(int a, int b);

int main()
{
    int a, b;
    cout << "Tim UCLN cua 2 so!" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "UCLN cua " << a << " va " << b << " la " << UCLN(a, b) << endl;
    cout << "BCNN cua " << a << " va " << b << " la " << BCNN(a, b) << endl;
    
    cin.get();
    cin.get();

    return 0;
}

// define function
int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a == b)
    {
        return a;
    }
    else
        return UCLN(b, a - b);
}

int BCNN(int a, int b)
{
    return a * b / UCLN(a, b);
}