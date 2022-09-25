#include<iostream>
using namespace std;
int calculate_power(int ,int);
int main(){
    int a ,b;
    cout<<"Enter number";
    cin>>a>>b;
    cout<<calculate_power(a,b);
    return(0);
}
int calculate_power(int x,int y){
    int pow=1;
    for(int i=1;i<=y;i++)
    pow=x*pow;
    return(pow);
}