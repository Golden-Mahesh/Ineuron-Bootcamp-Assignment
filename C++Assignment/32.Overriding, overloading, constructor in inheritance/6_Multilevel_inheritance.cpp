// 6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
// choice.
#include<iostream>
using namespace std;
class A{
private:
int a;
public:
A(){
    cout<<"Class A default constructor "<<endl;
}
A(int x){
    cout<<"Class A parameterized constructor "<<endl;
    a=x;
}
A(A &x){
    a=x.a;
}
int get_a(){
    return(a);
}
};
class B:public A{
private:
int b;
public:
B(){
    cout<<"Class  B default constructor "<<endl;
}
B(int x):A(x){
cout<<"Class B parameterized constructor "<<endl;
b=x;
}
B(B &x):A(x){
    cout<<"Class B copy constructor "<<endl;
    b=x.b;
}
int get_b(){
    return(b);
}
};
class C:public B{
    private:
    int c;
    public:
    C(){
        cout<<"Class C default constructor "<<endl;
    }
    C(int x):B(x){
        cout<<"Class C parameterized constructor "<<endl;
        c=x;
    }
    C(C &x):B(x){
        cout<<"Class C copy constructor "<<endl;
        c=x.c;
    }
   int get_c(){
    return(c);
   }
   void display(){
    cout<<c<<" "<<get_a()<<" "<<get_b()<<endl;
   }
};
int main(){
    C c1 ,c2(2);
    C c3=c2;
    c1.display();
    c2.display();
    c3.display();
    return(0);
}