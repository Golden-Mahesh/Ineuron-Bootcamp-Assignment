#include<iostream>
using namespace std;
class Rupee{
private:
float r;
public:
Rupee(float x){
    r=x;
}
void display(){
    cout<<"Rupee is "<<r<<endl;
}
int getR(){return r;};
};
class Dollar{
private:
float d;
public:
Dollar(Rupee r){
    d=r.getR()/10;
}
void display(){
    cout<<"Dollar is "<<d<<endl;
}
operator Rupee(){
    return(d*100);
}
};
int main(){
    Rupee r=23;
    Dollar d=r ;//Rupee to Dollar Conversion
    d.display();
    r.display();
    r=d;      //Dollar to Rupee Conversion
    d.display();
    r.display();
    return(0);
}