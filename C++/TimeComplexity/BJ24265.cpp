#include <iostream>
using namespace std;

int main(){
    int input;
    long cnt = 0;
    cin >> input;

    for(int i=1; i<=input-1; i++){
        for(int j=i+1; j<=input; j++){
            cnt++;
        }
    }

    cout << cnt << endl << 2;

    return 0;
}