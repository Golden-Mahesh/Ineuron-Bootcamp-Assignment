// 7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
#include<iostream>
using namespace std;
class A{
private:
int a;
public:
A(int x){
    a=x;
}
};
class B:public A{
    private:
    int square;
    public:
   B(int x):A(x){
    square=x*x;
   }
   void display(){
    cout<<square<<endl;
   }
};
int main(){
    B b1(2);
    b1.display();
}