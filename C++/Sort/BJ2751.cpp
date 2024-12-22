#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int N, inp;
  vector<int> v;
  cin >> N;

  for(int i=0; i<N; i++){
    cin >> inp;
    v.push_back(inp);
  }

  sort(v.begin(), v.end());

  for(int i=0; i<N; i++){
    cout << v[i] << "\n";
  }

  return 0;
}

/*
int array 최대 크기 : 약 250,000 -> 배열의 범위 넘어 error
So, vector 이용해야 함
vector : 자동으로 메모리가 할당되는 배열(stack과 유사), data type은 마음대로
*/