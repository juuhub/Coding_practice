#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input, b, zari = 0, i;
    string output;

    cin >> input >> b;
    i = input;

    while(i>0){
        i /= b;
        zari++;
    }

    for(int j=1; j<=zari; j++){
        i = input%b;
        if(i>9){
            i = i - 10 + 'A';
            output += i;
        }
        else{
            output += i;
        }
        i /= b;
    }

    cout << output;

    return 0;
}