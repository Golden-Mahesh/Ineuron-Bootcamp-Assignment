#include<iostream>
using namespace std;
class Counter{
    private:
    static int count;
    public:
    Counter(){
        cout<<count<<endl;
        count++;
    }
};
int Counter::count;
int main(){
 Counter c1;
 Counter c2,c4,c5;
}