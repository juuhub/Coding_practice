#include <iostream>
using namespace std;

int sum(int N){
    if(N==1) return 1;
    else return N + sum(N-1);
}

int main(){
    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}