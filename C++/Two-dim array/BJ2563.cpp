#include <iostream>
using namespace std;

int main(){
    int total, area[100][100] = {0,}, count = 0;
    int n1, n2;
    cin >> total;

    for(int i=0; i<total; i++){
        cin >> n1 >> n2;
        for(int j=n1; j<n1+10; j++){
            for(int k=n2; k<n2+10; k++){
                if(area[j][k]<1) count++;
                area[j][k]++;
            }
        }
    }

    cout << count;

    return 0;
}