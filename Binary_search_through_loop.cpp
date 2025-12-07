#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int element){
    int low=0, mid, high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]>element){
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[100],n,x;
    cout<<"enter the size of the array: ";
    cin>>n;
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<"enter the number you wanna search= ";
    cin>>x;
    int search=binarySearch(arr,n,x);
    cout<<"the searched element is in= "<<search<<" position";
    return 0;
}