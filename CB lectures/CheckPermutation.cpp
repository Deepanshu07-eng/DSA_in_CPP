#include <iostream>
using namespace std;

bool isPermutation(char *a, char *b) {
    int freq[26] = {0};

    // Count frequency of characters in first string
    for (int i = 0; a[i] != '\0'; i++) {
        int index = a[i] - 'a';
        freq[index]++;
    }

    // Subtract frequency for second string
    for (int i = 0; b[i] != '\0'; i++) {
        int index = b[i] - 'a';
        freq[index]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false; // Not a permutation
        }
    }
    return true; // They are permutations
}

int main() {
    char a[] = "abdcba";
    char b[] = "bcbdaa";

    if (isPermutation(a, b)) {
        cout << "The strings are permutations of each other." << endl;
    } else {
        cout << "The strings are NOT permutations of each other." << endl;
    }

    return 0;
}