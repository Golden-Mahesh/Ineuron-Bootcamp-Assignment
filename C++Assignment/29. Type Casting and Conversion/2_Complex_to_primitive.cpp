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
Complex operator=(int x){
    real=x;
    return(*this);
}
void display(){
    cout<<"Real= "<<real<<" b= "<<imag<<endl;
}
operator int(){
    return(real+imag);
}
};
int main(){
    Complex c1(2,3);
    int y =c1;
    cout<<y;
    return(0);
}