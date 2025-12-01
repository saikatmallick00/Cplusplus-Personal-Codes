//Ques : WAP to find the factors of a number ‘n’ 
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"factors of the number are= ";
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            cout<<i<<"\t";
        }
    }
    return 0;
}