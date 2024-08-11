#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1+n2+n3==180){
        if(n1==60 && n2==60 && n3==60) cout << "Equilateral";
        else if(n1==n2 || n2==n3 || n3==n1) cout << "Isosceles";
        else cout << "Scalene";
    }
    else cout << "Error";

    return 0;
}