#include <iostream>
using namespace std;

int main(){
    int mat[9][9], max = -1;
    int maxi, maxj;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> mat[i][j];
            if(mat[i][j]>max){
                max = mat[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }

    cout << max << endl << maxi+1 << " " << maxj+1;

    return 0;
}