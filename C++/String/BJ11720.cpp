#include <iostream>
using namespace std;

int main(){
    int sum = 0, size;
    cin >> size;
    char input[size];

    for(int i=0; i<size; i++){
        cin >> input[i];
        sum += input[i] - '0';
    }

    cout << sum;

    return 0;
}