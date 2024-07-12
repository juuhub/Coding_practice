#include <iostream>
using namespace std;

int main(){
    int times, max = 0, i;
    double sum = 0, avg;
    cin >> times;
    int score[times];

    for(i=0; i<times; i++){
        cin >> score[i];
        if(score[i]>max) max = score[i];
    }

    for(i=0; i<times; i++){
        sum += (double) score[i]/max*100;
    }

    avg = sum / (double) times;

    cout << avg;

    return 0;
}