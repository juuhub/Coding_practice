#include <iostream>
using namespace std;

/*
if(a1*n0+a0>c*n0) cout << 0;
else cout << 1;
-> a0가 음수인 경우 고려 못함
*/

int main(){
    int a1, a0, c, n0;

    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;

    if(a1*n0+a0<=c*n0 && a1<=c) cout << 1;
    else cout << 0;

    return 0;
}