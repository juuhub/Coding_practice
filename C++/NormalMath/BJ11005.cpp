#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int input, b, i;
    string output = "";

    cin >> input >> b;


    while(input>0){
        i = input % b;

        if(i<10) output += (char)(i + '0');
        else output += (char)(i - 10 + 'A');

        input /= b;
    }

    reverse(output.begin(), output.end());
    cout << output << endl;

    return 0;
}