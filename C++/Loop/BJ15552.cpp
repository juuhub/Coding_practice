#include <iostream>
using namespace std;

/*
입력 한 번에 출력이 매번 이루어지지 않게 함
cin.tie(NULL) -> 입력, 출력 연결 끊어줌 / 매번 출력을 비우지(flush) 않고 나중에 한 번에 비우도록 함
(입력 한 번에 출력이 매번 이루어지지 않게 함)
ios_base::sync_with_stdio(false) -> C의 studio와 C++ iostream 동기화를 비활성화
(C와 C++ : 동일 버퍼 공유중)
*/

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int times, n1, n2, i;
    cin >> times;
    int sum[times] = {0,};

    for(i=0; i<times; i++){
        cin >> n1 >> n2;
        sum[i] = n1 + n2;
    }

    for(i=0; i<times; i++){
        cout << sum[i] << "\n"; //endl 대신 "\n : endl은 개행 뿐 아니라 출력 버퍼 비우는 역할도 함"
    }

    return 0;
}