#include<iostream>
using namespace std;
class StaticCount{
         private:
         static int count;
         public:
         void f1(){
            count++;
         }
         static void f2(){
            count++;
         }
         static void showCount(){
            cout<<count<<endl;
         }
};
int StaticCount::count;
int main(){
    StaticCount s1;
    s1.f1();
    s1.f2();
    s1.f1();
    StaticCount::showCount();
}