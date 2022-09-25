#include<iostream>
using namespace std;
class Square{
    private:
     int s;
    public:
    void Square_Calculate(){
        int n;
        cout<<"Enter a nubmer";
        cin>>n;
        s=n*n;
    }
    void Display(){
        cout<<s<<endl;
    }
};
int main(){
    Square s1;
    s1.Square_Calculate();
    s1.Display();
}