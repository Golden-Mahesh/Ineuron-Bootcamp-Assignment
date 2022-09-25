#include<iostream>
using namespace std;
class Time{
        private:
        int h,m,s;
        public:
        void setTime(int x,int y,int z){
            h=x;
            m=y;
            s=z;
        }
        void showTime(){
            cout<<h<<":"<<m<<":"<<s<<endl;
        }
        void normalize(){
            while(s>=60){
                m++;
                s=s-60;
            }
            while(m>=60){
                h++;
                m=m-60;
            }
        }
        Time add(Time t){
            t.h=h+t.h;
            t.m=m+t.m;
            t.s=s+t.s;
            return(t);
        }
};
int main(){
    Time t1,t2,t3;
    t1.setTime(12,345,23);
    t2.setTime(23,23,235);
    t3=t1.add(t2);
    t3.showTime();
    t3.normalize();
    t3.showTime();
}