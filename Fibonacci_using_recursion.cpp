#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void printSeries(int i, int n){
    if(i > n) return;
    cout << fibonacci(i) << " ";
    printSeries(i + 1, n);
}
int main(){
    int n;
    cout << "Enter how many terms you want: ";
    cin >> n;
    printSeries(1, n);   
    return 0;
}
