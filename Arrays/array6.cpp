#include <iostream>
using namespace std;

int main() {
    int i, odd = 0, even = 0, arr[5];

    cout << "Enter the elements of the array: ";
    for(i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for(i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "There are " << even << " even numbers." << endl;
    cout << "There are " << odd << " odd numbers." << endl;

    return 0;
}