#include<iostream>
using namespace std;
class Complex{
    private:
    int a ,b;
    public:
    void setValue(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<"+"<<b<<"j"<<endl;
    }
};
int main(){
    Complex c1,c2;
    c1.setValue(4,6);
    c2.setValue(3,9);
    c1.display();
    c2.display();
}