#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string s = "Saikat is a good boy";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
