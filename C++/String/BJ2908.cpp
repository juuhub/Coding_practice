#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1, s2;
    int num1 = 0, num2 = 0, mul=100;
    cin >> s1 >> s2;

    for(int i=2; i>=0; i--){
        num1 += (s1[i] - '0')*mul;
        num2 += (s2[i] - '0')*mul;
        mul /=10;
    }

    if(num1>num2) cout << num1;
    else cout << num2;

    return 0;
}