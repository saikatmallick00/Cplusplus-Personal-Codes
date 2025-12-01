// *
// * *
// * * *
// * * * *
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the number of layers= ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        j=1;
        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}