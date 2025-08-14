/* Piyush is lost in a magical park which contains N rows and M columns.In order to get out of park safely and return home, he needs atleast K amount of strength.Given a N by M pattern, your task is to find weather Piyush can ever escape the park.



Piyush enters the park with strength S. The park is filled with some obstacles denoted by ‘.’ , some magical beans denoted by ‘*’ and some blockades denoted as ‘#’. If he encounters an obstacle (.) , strength decreases by 2. If he encounters a magic bean (' * ') , his strength increases by 5. Piyush can only walk row wise, so he starts from left of a row and moves towards right and he does this for every row. However when he encounters a blockade (#) , he cannot go any further in his current row and simply jumps to the start of a new line without losing any strength. Piyush requires a strength of 1 for every step. His strength should always be greater than K while traversing or else Piyush will get lost. Assume that Piyush can shift immediately from last of one row to the start of next one without loss of any strength, help out Piyush to escape the park. His escape is successful if he is able to return home with atleast K strength.

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, K, S;
    cin >> N >> M >> K >> S;

    vector<vector<char>> park(N, vector<char>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> park[i][j];
        }
    }

    bool canEscape = true;

    for (int i = 0; i < N && canEscape; i++) {
        for (int j = 0; j < M; j++) {
            char cell = park[i][j];

            if (cell == '#') {
               
                break;
            }
            else if (cell == '.') {
                S -= 2; 
            }
            else if (cell == '*') {
                S += 5; 
            }

            if (j != M - 1) {
                S -= 1;
            }
            if (S < K) {
                canEscape = false;
                break;
            }
        }
    }

    if (canEscape && S >= K) {
        cout << "Yes" << endl;
        cout << S << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

