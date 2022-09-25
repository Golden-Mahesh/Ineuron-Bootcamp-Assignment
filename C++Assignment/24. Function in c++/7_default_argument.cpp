#include<iostream>
using namespace std;
int add(int ,int=0 ,int=0);
int main(){
    int a=2,b=3;
    cout<<add(a,b)<<endl;
    int c=5;
    cout<<add(a,b,c);
}
int add(int x,int y,int z){
    return(x+y+z);
}