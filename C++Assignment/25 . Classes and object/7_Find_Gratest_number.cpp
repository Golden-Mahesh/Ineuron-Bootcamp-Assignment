#include<iostream>
using namespace std;
class Gratest{
     private:
     int max;
     public:
     void FindGreatestNmber(int a,int  b,int c){
        if(a>b){
            if(a>c)
            max=a;
            else
            max=c;
        }
        else{
            if(b>c)
            max=b;
            else
            max=c  ; 
        }
     }
     void Display(){
        cout<<max<<endl;
     }
};
int main(){
    Gratest number;
    int a, b,c;
    cout<<"Enter three number";
    cin>>a>>b>>c;
    number.FindGreatestNmber(a,b,c);
    number.Display();
}