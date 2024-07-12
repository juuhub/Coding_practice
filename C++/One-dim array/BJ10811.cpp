#include <iostream>
using namespace std;

int main(){
    int bsize, times, i, j, start, end;
    cin >> bsize >> times;
    int basket[bsize];
    for(i=0; i<bsize; i++){
        basket[i]=i+1;
    }

    for(i=0; i<times; i++){
        cin >> start >> end;
        int temp[end-start+1]={0,};
        int k=0;
        for(j=start; j<=end; j++){
            temp[k] = basket[j-1];
            k++;
        }
        k = 0;
        for(j=end; j>=start; j--){
            basket[j-1] = temp[k];
            k++;
        }
    }

    for(i=0; i<bsize; i++){
        cout << basket[i] << " ";
    }

    return 0;
}