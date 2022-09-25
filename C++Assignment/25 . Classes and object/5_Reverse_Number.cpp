#include<iostream>
using namespace std;
class ReverseNumber{
    private:
    int rev=0;
    public:
    void reverse(){
        int n,r;
        cout<<"Enter a number";
        cin>>n;
        while (n){
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
    }
    void Display(){
        cout<<rev;
    }
};
int main(){
    ReverseNumber r;
    r.reverse();
    r.Display();
}