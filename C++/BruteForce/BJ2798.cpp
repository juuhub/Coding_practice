#include <iostream>
using namespace std;

int main(){
    int times, goal, sum = 0, temp, min = 10000000;
    cin >> times >> goal;

    int card[times];
    for(int i=0; i<times; i++){
        cin >> card[i];
    }

    for(int i=0; i<times-2; i++){
        for(int j=i+1; j<times-1; j++){
            for(int k=j+1; k<times; k++){
                sum = card[i] + card[j] + card[k];
                if(goal - sum < min && goal >= sum){
                    min = goal - sum;
                    temp = sum;
                }
            }
        }
    }

    cout << temp;

    return 0;
}