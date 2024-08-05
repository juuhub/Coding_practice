#include <iostream>
using namespace std;

int main(){
    int times, input, na;
    cin >> times;

    int q[times][4] = {0,};
    int money[] = {25, 10, 5, 1};

    for(int i=0; i<times; i++){
        cin >> input;
        for(int j=0; j<4; j++){
            na = input / money[j];
            q[i][j] = na;
            input -= na*money[j];
            if(input<0) break;
        }
    }

    for(int i=0; i<times; i++){
        for(int j=0; j<4; j++){
            cout << q[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}