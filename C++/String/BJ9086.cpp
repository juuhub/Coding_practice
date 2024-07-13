#include <iostream>
using namespace std;

int main(){
    int times, i;
    string input;
    cin >> times;
    string fe[times];

    for(i=0; i<times; i++){
        cin >> input;
        if(input.length()==1){
            fe[i] = input.substr(0,1) + input.substr(0,1);
        } 
        else{
            fe[i] += input.substr(0,1) + input.substr(input.length()-1,1);
        } 
    }

    for(i=0; i<times; i++){
        cout << fe[i] << endl;
    }

    return 0;
}