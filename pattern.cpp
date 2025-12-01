// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include<iostream>
using namespace std;
int main(){
    int n, i,j;
    cout<<"enter the number of layers= ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}