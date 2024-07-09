#include <iostream>
using namespace std;

int main(){
    int total, n1, n2;
    cin >> total;
    int sum[total] = {0,};

    for(int i=0; i<total; i++){
        cin >> n1 >> n2;
        sum[i] = n1 + n2;
    }

    for(int i=0; i<total; i++){
        cout << sum[i] << endl;
    }

    return 0;
}