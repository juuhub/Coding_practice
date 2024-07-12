#include <iostream>
using namespace std;

int main(){
    int bsize, times, c1, c2, i;
    cin >> bsize >> times;
    int basket[bsize];
    for(i=0; i<bsize; i++){
        basket[i] = i+1;
    }

    for(i=0; i<times; i++){
        cin >> c1 >> c2;
        if(c1!=c2){
            int temp = basket[c1-1];
            basket[c1-1] = basket[c2-1];
            basket[c2-1] = temp;
        }
    }

    for(i=0; i<bsize; i++){
        cout << basket[i] << " ";
    }
    return 0;
}