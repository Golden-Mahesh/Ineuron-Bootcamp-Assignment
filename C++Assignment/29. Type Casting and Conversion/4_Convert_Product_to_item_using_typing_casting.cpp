#include<iostream>
using namespace std;
class item{
private:
int a;
int b;
public:
item(){
      a=0;
      b=0;
}

item(int x,int y){
   a=x;
   b=y;
}
item(int x){
	a=x;
	b=x;
}
void display(){
   cout<<"a ="<<a<<"  b "<<b<<endl;
}
item operator=(item temp){
  a=temp.a;
  b=temp.b;
}

};
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
operator item(){
	item i1(x+y);
return(i1);         //          
}

};

int main(){
    item i1(123,145);
    Product p1;
    p1.setDeta(3,4);
    i1=p1;
    i1.display();
    return(0);
}
