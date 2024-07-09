#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int times, n1, n2, i;
    cin >> times;
    int sum[times] = {0,};

    for(i=0; i<times; i++){
        cin >> n1 >> n2;
        sum[i] = n1 + n2;
    }

    for(i=0; i<times; i++){
        cout << "Case #" << i+1 << ": " << sum[i] << "\n";
    }

    return 0;
}