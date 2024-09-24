#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int N, k;
  cin >> N >> k;

  int num[10000] = {0,};

  for(int i=0; i<N; i++){
    cin >> num[i];
  }

  sort(num, num+N, greater<>());

  cout << num[k-1];

  return 0;
}