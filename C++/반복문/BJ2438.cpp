#include <iostream>
using namespace std;

int main(){
    int h, i, j;
    cin >> h;

    for(i=1; i<=h; i++){
        for(j=1; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}