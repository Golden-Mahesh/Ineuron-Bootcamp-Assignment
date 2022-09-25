#include<iostream>
using namespace std;
class Box{
 private:
 int length;
 int breadth;
 int height;
 public:
 Box(int l ,int b,int h){
    length=l;
    breadth=b;
    height=h;
 }
 Box(){
    length=0;
    breadth=0;
    height=0;
 }
 int calculate_volume(){
    return(length*breadth*height);
 }
};
int main(){
    Box b1(3,4,5);
   cout<< b1.calculate_volume();
}