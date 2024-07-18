#include <iostream>
#include <string>
using namespace std;

int main(){
    int times[8] = {3,4,5,6,7,8,9,10};
    int total = 0;
    char dial[8][4] = {{'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'Q', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y', 'Z'}};
    string input;
    cin >> input;
    
    for(int i=0; i<input.length(); i++){
        for(int j=0; j<8; j++){
            for(int k=0; k<4; k++){
                if(input[i]==dial[j][k]) total += times[j];
            }
        }
    }

    cout << total;
}