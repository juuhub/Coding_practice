#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    string input;

    while(1){
        getline(cin, input);
        if(input=="") break;

        cout << input << endl;
    }

    return 0;
}