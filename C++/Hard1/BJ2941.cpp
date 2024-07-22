#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> croatia = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    int index;
    string input;
    cin >> input;

    for(int i=0; i<croatia.size(); i++){
        while(1){
            index = input.find(croatia[i]); //범위 내(begin - end)의 원소들 중에서 value와 일치하는 첫번째 원소의 iterator 반환
            if (index == string::npos) //-1 값을 가지는 상수로 find() 함수 수행 시에 찾는 문자열이 없을 때 반환
				break;
            input.replace(index, croatia[i].size(), "!");
        }
    }

    cout << input.length();

    return 0;
}