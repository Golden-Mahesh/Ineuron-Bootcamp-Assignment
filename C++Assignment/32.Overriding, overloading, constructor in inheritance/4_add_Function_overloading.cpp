// 4. Define a class Addition that can add 2 or 3 numbers of different data types using
// function overloading.
#include<iostream>
using namespace std;
class Addition{
    private:
double result;
public:
void add(int x,int y){
    result=x+y;
}
void add(int x,double y){
    result=x+y;
}
void add(double x,double y){
    result=x+y;
}
void add(double x,int y){
    result=x+y;
}
void display(){
    cout<<result<<endl;
}
};
int main(){
     Addition a1;
     a1.add(2,3);
     a1.display();
     a1.add(2.3,3.4);
     a1.display();
}