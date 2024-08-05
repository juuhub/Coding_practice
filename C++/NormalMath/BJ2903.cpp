#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, res;

    cin >> n;
    res = pow(pow(2, n)+1, 2);

    cout << res;

    return 0;
}