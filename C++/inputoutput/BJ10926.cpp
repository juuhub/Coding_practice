#include <iostream>
using namespace std;

int main(){
    string id;
    cin >> id;

    cout << id << "?\?!";

    return 0;
}

/*
warning: trigraph ??! ignored
해결방법
trigraph: 삼중자, 특정 문자 3개가 나오면 다른 문자 하나로 대체
C++ 삼중자 사용 X라 에러 발생 -> 중간에 '\' 붙여줘야 함.
*/