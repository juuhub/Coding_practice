#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    double div;
    
    cin >> n1 >> n2;
    div = n1 / (double) n2;
    
    printf("%.9f", div);
    return 0;
}