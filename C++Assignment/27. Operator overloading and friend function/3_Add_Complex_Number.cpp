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
        cout<<a<<" +  "<<b<<"j"<<endl;
    }
   friend Complex operator+(Complex X,Complex Y);
    Complex operator-(Complex c){
        c.a=a-c.a;
        c.b=b-c.b;
        return(c);
    }
    Complex operator*(Complex c){
        Complex temp;
        temp.a=a*c.a-b*c.b;
        temp.b=a*c.b+b*c.a;
        return(temp);
    }
    int operator==(Complex c){
        if(a==c.a&&b==c.b)
        return(1);
        else
        return(0);
    }
    void operator++(){
        a=a+=1;
       b=b+=1;
    }
   // friend void operator++(Complex);
};
//void operator++(Complex c){
  //  c.a=c.a+=1;
  //  c.b=c.b+=1;
//}
Complex operator+(Complex X,Complex Y){
 Complex temp;
 temp.a=X.a+Y.a;
 temp.b=X.b+Y.b;
 return(temp);
}
int main(){
    Complex c1,c2,c3;
    c1.setValue(4,6);
    c2.setValue(3,9);
    c1.display();
    c2.display();
    c3=c1+c2 ;//operator+(c1,c2);
    c3.display();
}