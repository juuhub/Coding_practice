#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); //C와 C++의 표준 stream의 동기화를 끊는 역할, 따라서 CIN과 COUT의 속도 높아짐.
  cin.tie(NULL);
  cout.tie(NULL);

  int N, inp;
  cin >> N;

  int input[10001] = {0};
  
  for(int i=0; i<N; i++){
    cin >> inp;
    input[inp]++;
  }

  for(int i=1; i<10001; i++){
    for(int j=0; j<input[i]; j++){
      cout << i << "\n";
    }
  }

  return 0;
}