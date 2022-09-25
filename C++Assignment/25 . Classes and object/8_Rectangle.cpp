#include<iostream>
using namespace std;
class Rectangle{
    private:
        int Area;
    public:
    void Area_calculate(int length,int breadth){
        Area=length*breadth;
    }
    void Display(){
        cout<<Area;
    }
};
int main(){
    Rectangle r1;
    int l ,b;
    cout<<"Enter length and breadth";
    cin>>l>>b;
    r1.Area_calculate(l,b);
    r1.Display();
}