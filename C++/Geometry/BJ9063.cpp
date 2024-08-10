#include <iostream>
using namespace std;

int main(){
    int xy[4] = {-10001, 10001, -10001, 10001}, times, x, y;
    unsigned int area;

    cin >> times;

    for(int i=0; i<times; i++){
        cin >> x >> y;
        if(x>xy[0]) xy[0] = x;
        if(x<xy[1]) xy[1] = x;

        if(y>xy[2]) xy[2] = y;
        if(y<xy[3]) xy[3] = y;
        }  

    if(times==1) cout << 0;
    else{
        area = (xy[0] - xy[1]) * (xy[2] - xy[3]);
        cout << area;
    }
    
    return 0;
}