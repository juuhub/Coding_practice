//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.

#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    
    cout << n1 + n2 << endl;
    cout << n1 - n2 << endl;
    cout << n1 * n2 << endl;
    cout << n1 / n2 << endl;
    cout << n1 % n2 << endl;
    
    return 0;
}