#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 88;
    int guess; // 1. Declared outside so 'while' can read it
    int i = 0;

    do {
        cout << "What is your number: ";
        cin >> guess;

        if (guess > a) {
            cout << "It's bigger" << endl;
        }
        else if (guess < a) { // 2. Only prints when strictly smaller
            cout << "It's smaller" << endl;
        }

        i += 1;       
    } while (guess != a); // 3. Only one closing brace before 'while'

    cout << "you win man" << endl << "You win in " << i << " chances!!";

    return 0;
}
