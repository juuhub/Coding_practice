#include <iostream>
#include <stdlib.h>
using namespace std;

/*
int y = (c * d - a * f) / (b * d - a * e);
int x = (c * e - b * f) / (a * e - b * d);
*/

int main(){
    int a, b, c, d, e, f;
    int x, y;

    cin >> a >> b >> c >> d >> e >> f;
    
    for(int i=-999; i<1000; i++){
        for(int j=-999; j<1000; j++){
            if(a*i+b*j==c && d*i+e*j==f){
                x = i, y = j;
                break;
            }
        }
    }

    cout << x << " " << y;
}