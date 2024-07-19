#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    for(int i=0; i<size; i++){
        for(int j=size-i-2; j>=0; j--){
            cout << " ";
        }
        for(int j=1; j<=i*2+1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1; i<size; i++){
        for(int j=1; j<=i; j++){
            cout << " ";
        }
        for(int j=(size-i)*2-1; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}