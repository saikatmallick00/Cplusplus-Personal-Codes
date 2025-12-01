#include<iostream>
using namespace std;
int main(){
    int a,n,i,b,sum=0;
    cout<<"enter the number ";
    cin>>a;
    for(i=a;i>=0;i++){
        b=a%10;
        sum+=b;
        a/=10;
    }
    cout<<sum;
    return 0;
}