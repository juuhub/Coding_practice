#include <iostream>
using namespace std;

int main(){
    int x[3], y[3];
    int xcnt[2] = {0,}, ycnt[2] = {0,};

    for(int i=0; i<3; i++){
        cin >> x[i] >> y[i];
        
    }

    if(x[0]==x[1]) cout << x[2];
    else if(x[0]==x[2]) cout << x[1];
    else if(x[1]==x[2]) cout << x[0];

    if(y[0]==y[1]) cout << " " << y[2];
    else if(y[0]==y[2]) cout << " " << y[1];
    else if(y[1]==y[2]) cout << " " << y[0];

    return 0;
}