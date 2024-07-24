#include <iostream>
using namespace std;

int main(){
    char sen[5][15];
    string input;

    for(int i=0; i<5; i++){
        for(int j=0; j<15; j++){
            sen[i][j]='-';
        }
    }

    for(int i=0; i<5; i++){
        cin >> input;
        for(int j=0; j<input.length(); j++){
            sen[i][j] = input[j];
        }
    }

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(sen[j][i]!='-'){
                cout << sen[j][i];
            }
        }
    }

    return 0;
}