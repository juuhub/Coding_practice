#include <iostream>
using namespace std;

int main(){
    int times, input, sum = 0, cnt;

    cin >> times;

    for(int i=0; i<times; i++){
        cnt = 0;
        cin >> input;
        if(input==1) continue;
        else{
            for(int j=1; j<=input; j++){
                if(input%j==0) cnt++;
            }
            if(cnt==2) sum++;
        }
    }

    cout << sum;

    return 0;
}