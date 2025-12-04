#include<iostream>
using namespace std;
int main(){
    string s= "Saikat";
    cout<<s.length()<<endl;
    s.append(" Mallick");
    cout<<s.length()<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.push_back('a');
    cout<<s<<endl;
    s.clear();
    s=s+ "good boy";
}    