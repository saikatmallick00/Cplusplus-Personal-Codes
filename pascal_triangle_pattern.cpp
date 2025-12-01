// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 1
#include<iostream>
using namespace std;
int fact(int x){
    int s=1;
    for (int i = 1; i <= x; i++)
    {
        s*=i;
    }
    return s;    
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"enter the number of layers= ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<ncr(i,j)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}