#include <iostream>
#include <string>
using namespace std;

int main(){
    int ch[26] = {0,}, i;
    int comp, max = -1, maxin, same = 0;
    char output;
    string input;
    cin >> input;

    for(i=0; i<input.length(); i++){
        input[i] = toupper(input[i]);
        comp = int(input[i])-65;
        ch[comp]++;
    }
    
    for(i=0; i<26; i++){
        if(ch[i]>max){
            max = ch[i];
            maxin = i;
        } 
    }

    for(i=0; i<26; i++){
        if(max==ch[i]) same++;
    }

    if(same>1) cout << "?";
    else cout << (char)(maxin+65);

    return 0;
}