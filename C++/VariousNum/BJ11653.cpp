#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=2; i<=N; i++){
        while(N%i==0){
            if(N%i==0){
                cout << i << endl;
                N /= i;
            }
        }
    }

    return 0;
}