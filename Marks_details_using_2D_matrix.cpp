#include<iostream>
using namespace std;
int main(){
    int rows;
    int arr[100][2];
    cout<<"enter the number of students : ";
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    } 
    cout<<"students Roll and Marks will be: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}