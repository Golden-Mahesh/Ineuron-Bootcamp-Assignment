#include<iostream>
using namespace std;
class Cube{
     private:
     int a,volume;
     public:
     Cube (int x,int v){
        a=x;
        volume=v;
     }
     void calculate(int p){
        a=p;
        volume=p*p*p;
     }
     void showVolume(){
        cout<<"Volume="<<volume<<endl;
     }
};
int main(){
    Cube c1(0,0);
    c1.calculate(4);
    c1.showVolume();
}