// 8. Write a C++ program to find the factorial of a number using copy constructor
#include<iostream>
using namespace std;
class Number{
private:
int n;
public:
Number(int x){
    this->n=x;
}
};
class Fact:public Number{
private:
int fact=1;
public:
Fact(int n):Number(n){
for(int i=1;i<=n;i++)
fact=fact*i;
}
void display(){
    cout<<fact<<endl;
}
};
int main(){
    Fact f1(5);
    f1.display();
}