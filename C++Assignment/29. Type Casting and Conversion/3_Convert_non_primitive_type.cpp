#include<iostream>
using namespace std;
class item;
class Product{
 private:
 int x;
 int y;
 public:
 Product(){
    x=0;
    y=0;
 }
 Product(int a,int b){
    x=a;
    y=b;
 }
 void setDeta(int x,int y){
    this->x=x;
    this->y=y;
 }
 int getX(){
    return(x);
 }
int getY(){
   return(y);
}
};
class item{
private:
int a;
int b;
public:
item(){
      a=0;
      b=0;
}
item( Product p1){
//   cout<<"Caller "<<a <<"  "<<b<<endl;
a=p1.getX();
b=p1.getY();
// cout<<"a= "<<a<<" b= "<<b<<endl;
}
item(int x,int y){
   a=x;
   b=y;
}
void display(){
   cout<<"a ="<<a<<"  b "<<b<<endl;
}
item operator=( item temp){
   // cout<<"Caller id "<<a  <<"  "<<b<<endl;
   // cout<<"Temp.a="<<temp.a<<" Temp.b="<< temp.b<<endl;
  a=temp.a;
  b=temp.b;
 // cout<<"a="<<a<<" b="<<b<<endl;
}
};
int main(){
    item i1(123,145);
    Product p1;
    p1.setDeta(3,4);
    i1=p1; //i1 ne assignment operator ko call kiya or p1 as an argument paas huaa fir p1 ki value temp me copy hone ke liye parametrized constructo called huaa .
    i1.display();
    return(0);
}