#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int num[1000];

    for(int i=0; i<N; i++){
        cin >> num[i];
    }

    sort(num, num+N);

    for(int i=0; i<N; i++){
        cout << num[i] << endl;
    }

    return 0;
}