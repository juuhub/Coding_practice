#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int times, count = 0, con;
    int start, end;
    string input;
    cin >> times;
    cin.ignore();
    for(int i=0; i<times; i++){
        con = 0;
        cin >> input;

        for(int j=0; j<input.length(); j++){
            start = input.find(input[j]);
            for(int k=start; k<input.length(); k++){
                if(input[j]==input[k]) end = k;
            }

            if(start==end) continue;
            for(int k=start; k<=end; k++){
                if(input[k]!=input[j]) con++;
            }
        }

        if(con==0) count++;
    }

    cout << count;

    return 0;
}