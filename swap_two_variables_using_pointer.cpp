#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    cout<<"enter two numbers= "<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"after swapping two numbers= "<<a<<"\t"<<b;
    return 0;
}