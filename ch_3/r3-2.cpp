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
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // ask for and read the midterm and final grades
    cout << "Please enter your midterm and final grades: ";
    double midterm, final;
    cin >> midterm >> final;

    // ask for the homework grades;
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";

    // the number and sum of grades read so far
    int count = 0;
    double sum = 0;

    // a variable into which is read
    double x;
    vector<double> homework;

    // invariant: homework contains all of the homework grades so far

    while (cin >> x)
    {
        homework.push_back(x);
    }

    // check that the student has entered some homework grades
    typedef vector<double>::size_type vec_sz; // creates a type that is guaranteed to hold
                                              // the number of elements in the largest
                                              // possible vector
    vec_sz size = homework.size();
    if (size == 0)
    {
        cout << endl
             << "You must enter your grades. "
                "Please try again."
             << endl;
        return 1;
    }

    // sort the grades
    sort(homework.begin(), homework.end()); // sort of a vector is to be no slower
                                            // than n log (n) where n is the number
                                            // of elements to be sorted.
                                            // defined in <algorithm>

    // compute the median homework grade
    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

    // display median homework grade
    cout << "The median grade for your homework was " << median << endl;

    // compute and write the final grade
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec) << endl;

    return 0;
}

// entire program will run in O(n log n) time