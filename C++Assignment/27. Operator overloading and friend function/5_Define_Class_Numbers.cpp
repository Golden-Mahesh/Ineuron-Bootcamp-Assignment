#include<iostream>
using namespace std;
class Numbers{
    private:
    int x,y,z;
    public:
   void setNumbers(int a,int b,int c){
    x=a;
    y=b;
    z=c;
   }
   Numbers(int a=0,int b=0,int c=0){
    x=a;
    y=b;
    z=c;
   }
   Numbers operator-(){
    Numbers temp;
    temp.x=-x;
    temp.y=-y;
    temp.z=-z;
    return(temp);
}
void showNumers(){
    cout<<"x="<<x<<"  y="<<y<<"   z="<<z<<endl;
}
};
int main(){
    Numbers n1(3,2,4),n2(1,2),n3(15),n4;
    n1=-n1;
    n2=-n2;
    n1.showNumers();
    n2.showNumers();
}