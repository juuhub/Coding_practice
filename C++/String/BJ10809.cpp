#include <iostream>
using namespace std;

int main(){
    int pos[26];
    int ston, i;
    string input;
    cin >> input;

    fill_n(pos, 26, -1);

    for(i=0; i<input.length(); i++){
        ston = (int)input[i];
        if(pos[ston-97]==-1) pos[ston-97] = i;
    }

    for(i=0; i<26; i++){
        cout << pos[i] << " ";
    }

    return 0;
}