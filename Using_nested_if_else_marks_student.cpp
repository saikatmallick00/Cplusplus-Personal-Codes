#include<iostream>
using namespace std;
int main(){
    int math, science, english;
    cout<< "enter the marks of Math: ";
    cin>> math;
    cout<< "enter the marks of science: ";
    cin>> science;
    cout<< "enter the marks of English: ";
    cin>> english;
    if(math>=80){
        if(science>=70){
            if(english>=60){
                cout<< "eligible";
            }else{
                cout<< "improve English";
            }
        }else{
            cout<<"improve Science";
        }
    }else{
        cout<<"improve Math";
    }
    return 0;
}