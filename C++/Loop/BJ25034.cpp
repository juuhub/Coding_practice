#include <iostream>
using namespace std;

int main(){
    int totsum, totcnt, price, cnt, sum = 0;
    cin >> totsum;
    cin >> totcnt;

    for(int i=0; i<totcnt; i++){
        cin >> price >> cnt;
        sum += price * cnt;
    }

    if(totsum==sum) cout << "Yes";
    else cout << "No";

    return 0;
}