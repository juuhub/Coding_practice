#include <iostream>
using namespace std;

int main(){
    int n[3], max = 0, maxi, sum = 0;
    
    for(int i=0; i<3; i++){
        cin >> n[i];
        if(n[i] > max){
            max = n[i];
            maxi = i;
        } 
    }

    for(int i=0; i<3; i++){
        if(i!=maxi) sum += n[i];
    }

    if(max>=sum) cout << sum + (sum-1);
    else cout << sum + max;

    return 0;
}