// Ques : Take input percentage of a student and print the Grade according to marks:
// 1) 81-100 Very Good
// 2) 61-80 Good
// 3) 41-60 Average
// 4) <=40 Fail
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the percentage of the marks: ";
    cin>>marks;
    if (marks>40)
    {
        if (marks>=41){
            if (marks>=61)
            {
                if (marks>=81 && marks<=100)
                {
                    cout<<"very good";
                }else{
                    cout<<"good";
                }   
            }else{
                cout<<"average";
            }
        }else
        {
            cout<<"fail";
        }
    }
    return 0;
}