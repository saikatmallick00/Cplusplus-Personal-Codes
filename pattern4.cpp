//     *
//     *
// * * * * *
//     *   
//     * 
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the number of layers= ";
    cin>>n;
    if (n%2!=0)
    {
        for ( i = 1; i <= n; i++)
        {
            if (i==((n/2)+1))
            {
                for ( j = 1; j <= n; j++)
                {
                    cout<<"* " ;                     
                }
            }else{
                for ( j = 1; j <= n; j++)
                {
                    if (j==((n/2)+1))
                    {
                        cout<<"* ";
                    }else
                    {
                        cout<<"# ";
                    }
                }  
            }
            cout<<endl;
        }
    }
    return 0;
}