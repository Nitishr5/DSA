#include <iostream>
using namespace std;
int main() {

    char alphabet[26];

   
    for (int i = 0; i < 26; ++i) {
        alphabet[i] = 'a' + i; // Assign 'a' + i to the current index
    }

    // Print the elements of the array
    for (int i = 0; i < 26; ++i) {
        cout << alphabet[i] << ' '; // Print each character followed by a space
    }
    return 0;
}

