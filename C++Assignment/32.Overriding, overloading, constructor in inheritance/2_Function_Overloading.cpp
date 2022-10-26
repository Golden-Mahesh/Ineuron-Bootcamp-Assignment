// 2. Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;
class Rectangle{
private:
double Area;
public:
void area(int l,int b){
    cout<<"Area 1 called"<<endl;
    Area=l*b;
}
void area(double l,double b){
    cout<<"Area 2 called "<<endl;
    Area=l*b;
}
void area(int l,double b){
    cout<<"Area 3 called"<<endl;
    Area=l*b;
}
void area(double l,int b){
    cout<<"Area 5 called"<<endl;
    Area=l*b;
}
void display(){
    cout<<Area<<endl;
}
};
int main(){
    Rectangle r1,r2,r3,r4;
     r1.area(2,3);
     r1.display();
     r2.area(2.3,2.0);  // double type promotion float double
                             // char int 
                             // type conversion 
                             // double int        int int
                              // double char      char char
                             //double float       float float
                                                  
     r2.display();
     r3.area(2,3.4);
     r3.display();
     r4.area(3.0,2);
     r4.display();
     return(0);
}