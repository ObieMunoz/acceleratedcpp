#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter a number: ";
    int a;
    cin >> a;
    cout << "Enter a number: ";
    int b;
    cin >> b;

    if (a > b)
        cout << a << " is larger than " << b << endl;
    else
        cout << b << " is larger than " << a << endl;
}