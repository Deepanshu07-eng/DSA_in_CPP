/*
Pragya and Pranjal are sisters, and they love to watch reels and YouTube shorts the whole day on their mobile phones. One blue day their mummy scolded them and threw their phones into the fire. They were getting bored after this incident because nothing exciting was happening in their lives. Their mummy motivated them to learn a programming language, and due to her highly motivational speech, Pragya and Pranjal picked up a coding question. The task is to print true if elements of the square matrix make the lower triangular, otherwise print false.
However, they don't know any programming language but you do. Now it's your task to write code for this problem.
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool isLower = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int val;
            cin >> val;
            
            if (i < j && val != 0) {
                isLower = false;
            }
        }
    }

    if (isLower)
        cout << "true";
    else
        cout << "false";

    return 0;
}
