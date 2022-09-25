#include<iostream>
using namespace std;
float area(int);
float area(int ,int );
int main(){
    int x,y;
    cout<<area(2)<<endl;
    cout<<area(2,3)<<endl;
    cout<<area(4,4)/2.0;

}
float area(int r){
    return(3.14*r*r);
}
float area(int x ,int y){
    return(x*y);
}