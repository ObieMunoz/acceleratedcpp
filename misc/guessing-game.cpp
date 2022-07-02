#include <iostream>
#include <random>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::floor;

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(1, 100);
    double number = floor(distribution(gen));
    int guess;
    int round = 0;
    bool playing = true;
    while (guess != number && playing)
    {
        ++round;
        if (round > 10)
        {
            cout << "Game over! The number was " << number << endl;
            playing = false;
            break;
        }
        cout << "Round " << round << "! "
             << "Enter a number: ";
        cin >> guess;
        if (guess < number)
        {
            cout << "Your guess was too low." << endl;
        }
        else if (guess > number)
        {
            cout << "Your guess was too high." << endl;
        }
        else
        {
            cout << "You win!! The number was " << number << endl;
        }
    }
}