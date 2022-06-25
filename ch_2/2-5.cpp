#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Enter Shape Height: ";
    int height;
    cin >> height;

    const int rows = height;
    const int width = height;

    cout << endl;
    cout << "Square Height will be " << height << endl;
    cout << "Square Width will be " << width << endl;

    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;

        while (c != width)
        {
            if ((c == 0) || (c == width - 1) || (r == 0) || (r == rows - 1))
            {
                cout << "* ";
                ++c;
            }
            else
            {
                cout << "  ";
                ++c;
            }
        }
        cout << endl;
    }

    cout << "Rectangle Height will be: " << height << endl;
    cout << "Rectangle Width will be: " << height * 2 << endl;

    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;

        while (c != width * 2)
        {
            if ((c == 0) || (c == (width * 2) - 1) || (r == 0) || (r == rows - 1))
            {
                cout << "* ";
                ++c;
            }
            else
            {
                cout << "  ";
                ++c;
            }
        }
        cout << endl;
    }
}