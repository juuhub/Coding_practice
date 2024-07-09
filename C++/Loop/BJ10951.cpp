#include <iostream>
using namespace std;

/*
입력에서 더 이상의 읽을 수 있는 데이터가 존재하지 않을 때 종료
끝까지 읽고난 뒤 그 다음 데이터(파일)을 읽으려 할 때 EOF
while(!(cin >> a >> b).eof()) : 읽기 시도를 한 후에 eof 검사 해야 함
*/

int main(){
    int n1, n2;
    while(!(cin >> n1 >> n2).eof()){
        cout << n1 + n2 << "\n";
    }

    return 0;
}