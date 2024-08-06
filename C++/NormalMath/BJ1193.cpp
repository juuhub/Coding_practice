#include <iostream>
using namespace std;

int main(){
    int times = 1, x;
    cin >> x;

    while(x - times > 0){
        x -= times;
        times++;
    }

    if(times%2!=0) cout << times + 1 - x << "/" << x;
    else cout << x << "/" << times + 1 - x;

    return 0;
}