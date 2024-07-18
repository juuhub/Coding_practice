#include <iostream>
#include <string>
using namespace std;

int main(){
    int total, times, i, j, k;
    string input;
    cin >> total;

    for(i=0; i<total; i++){
        cin >> times;
        cin >> input;
        for(j=0; j<input.length(); j++){
            for(k=0; k<times; k++){
                cout << input[j];
            }
        }
        cout << endl;
    }

    return 0;
}