#include <iostream>
using namespace std;

int main(){
    int d1, d2, d3, max, money = 0;
    cin >> d1 >> d2 >> d3;

    if(d1==d2 && d2==d3){
        money = 10000 + (d1*1000);
    }
    else if((d1==d2 && d1!=d3)){
        money = 1000 + (d1*100);
    }
    else if(d2==d3 && d2!=d1){
        money = 1000 + (d2*100);
    }
    else if(d3==d1 && d3!=d2){
        money = 1000 + (d3*100);
    }
    else{
        if(d1 > d2 && d1 > d3) max = d1;
        else if(d2 > d1 && d2 > d3) max = d2;
        else max = d3;
        money = max * 100;
        //money = max(max(a,b),c) * 100;
    }
    
    cout << money;

    return 0;
}