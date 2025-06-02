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