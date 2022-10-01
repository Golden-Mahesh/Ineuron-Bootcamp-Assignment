#include<iostream>
using namespace std;
class Time{
private:
int hour;
int minute;
public:
Time(int h,int m){
    hour=h;
    minute=m;
}
void display(){
    cout<<hour<<":"<<minute<<endl;
}
int getHour(){return hour;};
int getMinute(){return minute;}
};
class Minute{
private:
int minute;
public:
Minute(){
    minute=0;
}
void display(){
    cout<<"Minute="<<minute<<endl;
}
Minute(Time t1){
 minute=t1.getHour()*60+t1.getMinute();   
}
};
int main(){
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;
    t1.display();
    m1.display();
    return(0);
}