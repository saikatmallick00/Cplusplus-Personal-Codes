// Bubble sort is a sorting algorithm that works like this:
// Compare two adjacent elements
// If they are in the wrong order, swap them
// After each full pass, the largest element moves to its correct position at the end
#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for ( int i = n-1; i>=0; i++)
    {
        int didswap=0;
        for (int j=0; j<=i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if (didswap==0)
        {
            break;
        }
    }  
}
int main(){
    int n;
    cout<<"enter the size of the array= ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}