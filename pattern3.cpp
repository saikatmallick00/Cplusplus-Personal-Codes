// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;
int main(){
    int n,i,j,s;
    cout<<"enter the number of layers= ";
    cin>>n;
    s=1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<s<<"\t";
            s++;
        }
        cout<<endl;
    }
    return 0;
}