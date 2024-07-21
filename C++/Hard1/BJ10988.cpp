#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;
    int start = 0, mid = input.length()/2, end = input.length() - 1;
    int count = 0, i;

    if(input.length()%2==0){
        for(i=0; i<mid; i++){
            //cout << input[i] << " " << input[end-i] << endl;
            if(input[i]==input[end-i]) count++;
        }
    }
    else{
        for(i=0; i<=mid-1; i++){
            //cout << input[i] << " " << input[end-i] << endl;
            if(input[i]==input[end-i]) count++; 
        }
    }

    if(count==mid) cout << 1;
    else cout << 0;

    return 0;
}