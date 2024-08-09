#include <iostream>
using namespace std;

int main(){
    int M, N, sum = 0, cnt, min = 10000;

    cin >> M;
    cin >> N;

    for(int i=M; i<=N; i++){
        cnt = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0) cnt++;
        }
        if(cnt==2){
            sum += i;
            if(i<min) min = i;
        }
    }

    if(sum==0) cout << -1;
    else cout << sum << endl << min;

    return 0;
}