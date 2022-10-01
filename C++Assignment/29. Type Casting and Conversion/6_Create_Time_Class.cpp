#include<iostream>
using namespace std;
class Time{
private:
int hour ,minute,second;
public:
Time(){
    hour=0;
    minute=0;
    second=0;
}
Time(int h,int m,int s){
    hour=h;
    minute=m;
    second=s;
}
Time(int s){
    hour=0;
    second=s;
    minute=0;
}
void display(){
    cout<<"Hour ="<<hour<<" Minute ="<<minute<<" second="<<second<<endl;
}
};
int main(){
    int duration;
    cout<<"Enter time duration in minutes";
    cin>>duration;
    Time t1=duration;
    t1.display();
    return(0);
}