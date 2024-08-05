#include <iostream>
using namespace std;

int main(){
    int N, layer = 1, sum = 1;

    cin >> N;

    while(N > sum){
        sum += 6*layer;
        layer++;
    }

    cout << layer;

    return 0;
}