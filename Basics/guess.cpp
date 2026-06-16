#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    cout << "Guess the number (1-10): ";
    cin >> guess;

    if (guess == secret) {
        cout << "Correct! You guessed it right.";
    } else {
        cout << "Wrong guess. The correct number was " << secret;
    }

    return 0;
}