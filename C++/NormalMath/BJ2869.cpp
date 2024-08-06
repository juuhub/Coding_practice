#include <iostream>
using namespace std;

int main(){
    int A, B, V, res;
    cin >> A >> B >> V;

    res = (V-A) / (A-B);

    if((V-A) % (A-B)==0) res++;
    else res+=2;

    cout << res;

    return 0;
}