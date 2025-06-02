#include <iostream>
using namespace std;

int main(){
  int adder[11];
  int size, input;

  adder[0] = 1;
  adder[1] = 2;
  adder[2] = 4;

  for(int i=3; i<11; i++){
    adder[i] = adder[i-1] + adder[i-2] + adder[i-3]; 
  }

  cin >> size;
  for(int i=0; i<size; i++){
    cin >> input;
    printf("%d\n", adder[input-1]);
  }
}

/*
<Bottom-up>
adder[0] -> 1
adder[1] -> 2
adder[2] -> 4
adder[3] -> adder[0] + adder[1] + adder[2]
adder[n] -> adder[n-3] + adder[n-2] + adder[n-1] 

1,2,3만을 이용하여 계산 가능
So, (N-3) + 3 = N-3 만드는 경우의 수

DP 알고리즘 정의 방법
1. 최적 구조 파악 -> 2. 문제의 재귀적 정의 -> 3. bottom-up 방법으로 solution 구함
*/