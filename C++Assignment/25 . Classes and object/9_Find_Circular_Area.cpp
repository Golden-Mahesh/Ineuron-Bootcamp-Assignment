#include<iostream>
using namespace std;
class Circle{
    private:
    float Area;
    public:
    void find_area(int r){
        Area =3.14*r*r;
    }
    void Display(){
        cout<<Area<<endl;
    }
};
int main(){
    Circle c1;
    int r;
    cout<<"Enter radious ";
    cin>>r;
    c1.find_area(r);
    c1.Display();
}