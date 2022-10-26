// 1. Create a class FLOAT that contains one float data member. Overload all the four
// arithmetic operators so that they can operate on the objects of FLOAT.
#include<iostream>
using namespace std;
class FLOAT{
private:
float x;
public:
FLOAT(int x){
this->x=x;
}
FLOAT operator+( FLOAT x){
    return(this->x+x.x);
}
FLOAT operator-(FLOAT x){
    return(this->x-x.x);
}
FLOAT operator*(FLOAT x){
    return(this->x*x.x);
}
FLOAT operator/(FLOAT x){
    return(this->x/x.x);
}
friend ostream& operator<<(ostream&,FLOAT temp);
};
ostream& operator<<(ostream&fout,FLOAT temp){
    fout<<temp.x;
    return(fout);
}
int main(){
    FLOAT x=4,y=2;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y;
    return(0);
}