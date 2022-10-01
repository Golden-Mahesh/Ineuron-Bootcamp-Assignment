#include<iostream>
using namespace std;
class Dollar{
private:
int d;
public:
Dollar operator=(int x){
    d=x;
    return(*this);
}
void display(){
    cout<<"Dollar is "<<d<<endl;
}
};
int main(){
    int x=50;
    Dollar d;
    d=x;
    d.display();
    return(0);
}