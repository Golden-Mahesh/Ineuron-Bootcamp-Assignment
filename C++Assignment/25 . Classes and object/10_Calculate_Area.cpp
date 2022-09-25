#include<iostream>
using namespace std;
class Area{
     private:
     float a;
     public:
     void calculate_area(int s){
        a=s*s;
     }
     void calculate_area(int l,int b){
        a=l*b;
     }
     void circular_area(int r){
        a=3.14*r*r;
     }
     void Display(){
        cout<<a;
     }
};
int main(){
    Area a1;
    int r;
    cout<<"Enter radious";
    cin>>r;
    a1.circular_area(r);
    a1.Display();
}