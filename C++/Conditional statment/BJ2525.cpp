#include <iostream>
using namespace std;

int main(){
    int h, m, time;
    cin >> h >> m;
    cin >> time;

    if(m + time >= 60){
        h += (m + time) / 60;
        m = (m + time) % 60;
        if(h>=24) h = h - 24;
    }
    else{
        m = m + time;
    }
    
    cout << h << " " << m;

    return 0;
}