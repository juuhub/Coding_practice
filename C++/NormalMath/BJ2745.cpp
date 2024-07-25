#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string input;
    int n, sum = 0;

    cin >> input >> n;

    for(int i=0; i<input.length(); i++){
        
        char ch = input[input.length() - 1 - i];

        if(ch>='0' && ch<='9'){
            sum += pow(n, i)*(ch-'0'); 
        }
        else{
            sum += pow(n, i)*(ch-'A'+10);
        }
    }

    cout << sum;

    return 0;
}