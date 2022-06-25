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

    vector<string> wordList;
    vector<int> counts;
    typedef vector<string>::size_type vec_sz;
    string word;
    vec_sz size;

    // invariant: wordList contains the words read so far
    while (cin >> word)
    {
        int found_index = -1;
        size = wordList.size();
        // search the vector for the word
        for (vec_sz i = 0; i < size; ++i)
        {
            if (wordList[i] == word)
                found_index = i;
        }
        if (found_index >= 0)
            ++counts[found_index];
        else
        {
            wordList.push_back(word);
            counts.push_back(1);
        }
    }

    // write the results
    size = wordList.size();
    for (vec_sz i = 0; i < size; ++i)
    {
        cout << "Word: " << wordList[i] << ", Count: " << counts[i] << endl;
    }
    return 0;
}