#include <iostream>
using namespace std;

int main(){
    int n, yak, cnt, j, sum;

    while(1){
        cnt = 0, j = 0, sum = 0;
        cin >> n;

        if(n<0) break;

        else{
            for(int i=1; i<n; i++){
            if(n%i==0) cnt++;
            }

            int num[cnt];

            for(int i=1; i<n; i++){
                if(n%i==0){
                    num[j] = i;
                    j++;
                    sum += i;
                }
            }
            
            if(sum==n){
                cout << n << " = ";
                for(int i=0; i<cnt-1; i++){
                    cout << num[i] << " + ";
                }
                cout << num[cnt-1] << endl;
            }
            else{
                cout << n << " is NOT perfect." << endl;
            }
        }
    }

    return 0;
}