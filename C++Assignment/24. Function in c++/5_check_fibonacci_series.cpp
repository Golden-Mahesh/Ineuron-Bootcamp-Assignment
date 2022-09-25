#include<iostream>
using namespace std;
int check_fibonacci_series(int);
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(check_fibonacci_series(n))
    cout<<"yes";
    else
    cout<<"no";
    return(0);
}
int check_fibonacci_series(int n){
    int x=-1,y=1;
    int fib=x+y;
    while(fib<n){
        x=y;
        y=fib;
        fib=x+y;
    }
    if(fib==n)
    return(1);
    else
    return(0);
}