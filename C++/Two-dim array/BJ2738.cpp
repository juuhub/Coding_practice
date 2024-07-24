#include <iostream>
using namespace std;

int main(){
    int s1, s2, i, j;
    cin >> s1 >> s2;
    int m1[s1][s2];
    int m2[s1][s2];

    for(i=0; i<s1; i++){
        for(j=0; j<s2; j++){
            cin >> m1[i][j];
        }
    }

    for(i=0; i<s1; i++){
        for(j=0; j<s2; j++){
            cin >> m2[i][j];
        }
    }

    for(i=0; i<s1; i++){
        for(j=0; j<s2; j++){
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}