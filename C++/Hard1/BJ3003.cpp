#include <iostream>
using namespace std;

int main(){
    int fm[] = {1,1,2,2,2,8};
    int find[6];

    for(int i=0; i<6; i++){
        cin >> find[i];
    }

    for(int i=0; i<6; i++){
        cout << fm[i] - find[i] << " ";
    }

    return 0;
}