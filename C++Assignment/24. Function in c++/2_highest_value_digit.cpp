#include<iostream>
using namespace std;
int find_highest_digit(int);
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<find_highest_digit(n);
    return(0);
}
int find_highest_digit(int n){
    int highest_digit=0;
        while(n){
        int r=n%10;
        if(r>highest_digit)
        highest_digit=r;
        n=n/10;
    }
    return(highest_digit);
}