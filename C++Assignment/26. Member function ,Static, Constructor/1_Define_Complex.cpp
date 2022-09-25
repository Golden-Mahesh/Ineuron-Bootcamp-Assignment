#include<iostream>
using namespace std;
class complex{
    private:
    int a ,b;
    public:
    void setData(int x ,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"real="<<a<<" imag="<<b<<endl;
        }
    complex add(complex c){
        c.a=a+c.a;
        c.b=b+c.b;
        return(c);
    }
};
int main(){
    complex c1 ,c2,c3;
    c1.setData(3,4);
    c2.setData(1,2);
    c3=c1.add(c2);
    c3.showData();
}