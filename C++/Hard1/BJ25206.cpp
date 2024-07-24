#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, grade;
    double credit, csum = 0, total = 0;

    for(int i=0; i<20; i++){
        cin >> name >> credit >> grade;
        if(grade.compare("P")==0) continue;
        else{
            csum += credit;
            if(grade.compare("A+")==0) total += credit * 4.5;
            else if(grade.compare("A0")==0) total += credit * 4.0;
            else if(grade.compare("B+")==0) total += credit * 3.5;
            else if(grade.compare("B0")==0) total += credit * 3.0;
            else if(grade.compare("C+")==0) total += credit * 2.5;
            else if(grade.compare("C0")==0) total += credit * 2.0;
            else if(grade.compare("D+")==0) total += credit * 1.5;
            else if(grade.compare("D0")==0) total += credit * 1.0;
            else if(grade.compare("F")==0) total += credit * 0.0;
        }
    }

    printf("%.6f", total / csum);

    return 0;
}