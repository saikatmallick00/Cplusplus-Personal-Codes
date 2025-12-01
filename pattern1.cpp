// if n=4      n=5
// 1 2 3 4     1 2 3 4 5
// 1 2 3 4     1 2 3 4 5
// 1 2 3 4     1 2 3 4 5
// 1 2 3 4     1 2 3 4 5
//             1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the n(rows=cols)= ";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}