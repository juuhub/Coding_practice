#include <iostream>
using namespace std;

int main(){
    string word;
    int idx;
    cin >> word;
    cin >> idx;

    cout << word[idx-1];

    return 0;
}