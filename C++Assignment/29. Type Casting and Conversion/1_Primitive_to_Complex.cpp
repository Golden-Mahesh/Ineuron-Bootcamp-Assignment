#include<iostream>
using namespace std;
class Complex{
private:
int real,imag;
public:
Complex(){
    real=0;
    imag=0;
}
Complex(int x,int y){
    real=x;
    imag=y;
}
Complex(int x){
    real=x;
    imag=x;
}
Complex operator=(int x){
    real=x;
    return(*this);
}
void display(){
    cout<<"Real ="<<a<<" Imag = "<<b<<endl;
}
};
int main(){
    Complex c1;
    int x=5;
    c1=x;
    Complex c2=23;
    c1.display();
    c2.display();
    return(0);
}