#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int times, count = 0;
    int start, end, con;
    string input;
    cin >> times;
    cin.ignore();
    for(int i=0; i<times; i++){
        con = 0;
        cin >> input;
        char cstr[input.length()];
        strcpy(cstr,input.c_str());

        for(int j=0; j<input.length(); j++){
            start = input.find_first_not_of(cstr[j]);
            end = input.find_last_not_of(cstr[j]);
            for(int k=start; k<=end; k++){
                if(input[k]!=cstr[j]) con++;
            }
        }

        if(con>0) count++;
    }

    cout << count;

    return 0;
}