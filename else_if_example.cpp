#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter the cost price and selling price:  ";
    cin>>cp>> sp;
    if(sp>cp){
        cout<<endl<<"profit is= "<<sp-cp;
    }else if(sp<cp){
        cout<<endl<<"Loss is= "<<cp-sp;
    }else{
        cout<<endl<<"no profit no loss";
    }
    return 0;
}