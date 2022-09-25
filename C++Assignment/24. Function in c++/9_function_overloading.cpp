#include<iostream>
using namespace std;
int compare(int ,int);
int compare(float,float);
int main(){
     int x=2 ,y=3;
     float a=10.5,b=15;
    cout<<compare(x,y);
    cout<<endl<<compare(a,b);
    cout<<endl<<compare(2.6,345);

}
int compare(int x,int y){
    cout<<endl<<"X";
    return(x>y);
}
int compare(float x,float y){
    return(x>y);
}