#include <iostream>
using namespace std;

int main(){
    int remain[42] = {0,};
    int i, num, cnt = 0;

    for(i=0; i<10; i++){
        cin >> num;
        remain[num%42]++;
    }

    for(i=0; i<42; i++){
        if(remain[i]!=0) cnt++;
    }
    
    cout << cnt;

    return 0;
}