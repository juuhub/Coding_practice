#include <iostream>
using namespace std;

int main(){
    int times, temp, count = 0;
    cin >> times;
    int num[times] = {0,};

    for(int i=0; i<times; i++){
        cin >> num[i];
    }

    cin >> temp;
    for(int i=0; i<times; i++){
        if(temp==num[i]) count++;
    }
    cout << count;

    return 0;
}