#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
    cout << "Enter a list of integers, "
            "followed by end-of-file: ";

    double x;
    vector<double> intList;

    // invariant: intList contains all of the integers obtained so far
    while (cin >> x)
    {
        intList.push_back(x);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = intList.size();
    if (size == 0)
    {
        cout << endl
             << "You must enter a list of integers. "
                "Please try again."
             << endl;
        return 1;
    }

    sort(intList.begin(), intList.end());

    for (int i = 0; i < size; i++)
    {
        cout << "A quarter of " << intList[i] << " is " << intList[i] / 4 << endl;
    }

    return 0;
}