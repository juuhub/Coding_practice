#include <iostream>
using namespace std;

int main(){
    int student[30] = {0,};
    int okay, i;

    for(i=0; i<28; i++){
        cin >> okay;
        student[okay-1]++;
    }

    for(i=0; i<30; i++){
        if(student[i]==0) cout << i+1 << endl;
    }

    return 0;
}