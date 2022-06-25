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
    // get the input from the user
    cout << "Enter a list of words, "
            "followed by end-of-file: ";

    typedef vector<int>::size_type vec_sz;
    vector<vec_sz> sizes;
    string word;

    // invariant: sizes contains the length of the words read so far
    while (cin >> word)
        sizes.push_back(word.size());

    // sort the sizes vector
    sort(sizes.begin(), sizes.end());

    // write results
    cout << "Shortest word: " << sizes[0] << endl;
    cout << "Longest word: " << sizes[sizes.size() - 1] << endl;

    return 0;
}