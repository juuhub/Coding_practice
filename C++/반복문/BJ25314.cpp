#include <iostream>
using namespace std;

int main(){
    int n;
    string l;

    cin >> n;
    
    for(int i=0; i<n/4; i++){
        l += "long ";
    }

    l += "int";

    cout << l;

    return 0;
}