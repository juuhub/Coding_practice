#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int times, n1, n2, i;
    cin >> times;
    int sum[times] = {0,};

    for(i=0; i<times; i++){
        int sum = 0;
        cin >> n1 >> n2;
        sum = n1 + n2;

        cout << "Case #" << i+1 << ": " << n1 << " + " << n2 << " = " << sum << "\n";
    }

    return 0;
}