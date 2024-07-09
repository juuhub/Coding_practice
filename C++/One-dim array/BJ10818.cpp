#include <iostream>
using namespace std;

int main(){
    int times, max=-1000001, min=10000001, num;
    cin >> times;

    for(int i=0; i<times; i++){
        cin >> num;
        if(num>max) max = num;
        else if(num<min) min = num;
    }

    cout << min << " " << max;

    return 0;
}