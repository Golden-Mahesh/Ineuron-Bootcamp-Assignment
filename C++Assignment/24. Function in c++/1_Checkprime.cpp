#include<iostream>
#include<conio.h>
using namespace std;
int Prime(int);
int main(){
    int x;
    cout<<"Enter a number";
    cin>>x;
    if(Prime(x)){
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }
    _getch();
}
int Prime(int x){
    int i;
    for(i=2;i<x;i++){
        if(x%i==0)
        break;
    }
    if (i==x)
    return(1);
    else
    return(0);
}