#include<iostream>
using namespace std;
int main(){
    int x ,y;
    cout<<"Enter two number ";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"Now x="<<x<<" y="<<y;
    return(0);
}