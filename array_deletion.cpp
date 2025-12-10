#include<iostream>
using namespace std;
int main(){
    int n,k,arr[100];
    cout<<"enter the size of the array= ";
    cin>>n;
    cout<<"enter the element= ";
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<"enter the position you wanna delete: ";
    cin>>k;
    if(k==n-1){
        for (int i = 0; i < n-1; i++)
        {
            cout<<"arr[i]"<<" ";
        }
        
    }else
    {
        int index=k-1;
        for (int i = index; i < n-1; i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}