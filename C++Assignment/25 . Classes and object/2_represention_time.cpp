#include<iostream>
using namespace std;
class Time{
    private:
    int hour;
    int minute;
    int second;
    public:
    void setTime(int h,int m,int s){
        hour=h;
        minute=m;
        second=s;
    }
    void Display(){
        cout<<hour<<"hr "<<minute<<"min "<<second<<"sec"<<endl;
    }
};
int main(){
    Time t1,t2;
    t1.setTime(3,4,34);
    t2.setTime(2,23,50);
    t1.Display();
    t2.Display();
}