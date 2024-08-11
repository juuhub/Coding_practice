#include <iostream>
using namespace std;

int main(){
    int n[3], maxi, max, sum;

    while(1){
        maxi = 0, max = 0, sum = 0;
        for(int i=0; i<3; i++){
            cin >> n[i];
            if(n[i]>max){
                max = n[i];
                maxi = i;
            }
        }

        for(int i=0; i<3; i++){
            if(i!=maxi) sum += n[i];
        }

        if(n[0]==0 && n[1]==0 && n[2]==0) break;
        else if(max >= sum) cout << "Invalid" << endl;
        else if(n[0]==n[1] && n[1]==n[2]) cout << "Equilateral" << endl;
        else if(n[0]==n[1] || n[1]==n[2] || n[0]==n[2]) cout << "Isosceles" << endl;
        else cout << "Scalene" << endl;
    }

    return 0;
}