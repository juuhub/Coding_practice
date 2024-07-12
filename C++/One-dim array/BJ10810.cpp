#include <iostream>
using namespace std;

int main(){
    int bsize, times;
    int start, end, balln, i, j;
    cin >> bsize >> times;
    int basket[bsize] = {0,};

    for(i=0; i<times; i++){
        cin >> start >> end >> balln;
        for(j=start; j<=end; j++){
            basket[j-1] = balln;
        }
    }

    for(i=0; i<bsize; i++){
        cout << basket[i] << " ";
    }
}