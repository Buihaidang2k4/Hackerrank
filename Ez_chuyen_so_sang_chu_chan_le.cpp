/*
input: 
8
11
ouput:
eight
nine
even
odd
*/

#include <iostream>
#include <cstdio>
using namespace std;

string numberToWords(int num) {
    switch (num) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

int main() {
    int a, b;
  
    cin >> a >> b;
     for (int i = a; i <= b; ++i) {
        if (i >= 1 && i <= 9) {
            string words = numberToWords(i);
            cout << words << endl;
        } else {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
