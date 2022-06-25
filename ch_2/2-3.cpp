#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    cout << "Enter spacing between the frame and greeting: ";
    int spacing;
    cin >> spacing;

    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + spacing * 2;

    // separate the output from the input
    cout << endl;

    // write rows rows of output
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r)
    {
        // write a row of output
        string::size_type c = 0;
        while (c != cols)
        {
            // write one or more characters
            // adjust the value of c to maintain the invariant
            if (r == pad + 1 && c == pad + (spacing))
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
}