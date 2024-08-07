#include <iostream>
using namespace std;

int main(){
    int N, K, count = 0, j = 0;

    cin >> N >> K;

    for(int i=N; i>=1; i--){
        if(N%i==0){
            count++;
        }
    }
    
    int num[count] = {0,};

    for(int i=1; i<=N; i++){
        if(N%i==0){
            num[j] = i;
            j++;
        }
    }

    if(count<K) cout << 0;
    else cout << num[K-1];

    return 0;
}