#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input, sum, res = 0;
    cin >> input;

    for(int i=0; i<input; i++){
        sum = 0;
        res = i;
        while(res!=0){
            sum += res%10;
            res /= 10;
        }
        if(input==sum+i){
            res = i;
            break;
        }
    }

    cout << res;

    return 0;
}