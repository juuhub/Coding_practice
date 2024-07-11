#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int times;
    cin >> times;
    int num[times] = {0,};

    for(int i=0; i<times; i++){
        cin >> num[i];
    }

    sort(num, num+times);

    cout << num[0] << " " << num[times-1];

    return 0;
}