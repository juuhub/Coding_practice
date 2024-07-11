#include <iostream>
using namespace std;

int main(){
    int num[9] = {0,};
    int max = 0, maxin = 0;

    for(int i=0; i<9; i++){
        cin >> num[i];
        if(num[i]>max){
            max = num[i];
            maxin = i;
        }
    }
    cout << max << endl << maxin + 1;

    return 0;
}