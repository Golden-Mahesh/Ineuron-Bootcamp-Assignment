#include<iostream>
using namespace std;
class factorial{
     private:
     int f=1;
     public:
     void fact(int n){
           for(int i=1;i<=n;i++)
           f=f*i;
     }
     void Display(){
        cout<<f<<endl;
     }
};
int main(){
    factorial f1;
    int n;
    cout<<"Enter a number";
    cin>>n;
    f1.fact(n);
    f1.Display();
}