#include <iostream>
using namespace std;

int main(){
    long n1, n2, n3; // 10^12 *3 인 경우 int 범위 초과 -> long 사용

    cin >> n1 >> n2 >> n3;

    cout << n1 + n2 + n3 << endl;

    return 0;
}