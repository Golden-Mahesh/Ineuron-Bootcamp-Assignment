// 3. Define a base class Animals having member function sound() . Define another
// derived class from Animals class named Dogs. You need to override the sound
// function of the base class in the derived class.
#include<iostream>
using namespace std;
class Animals{
    public:
   virtual void sound(){
          cout<<"Animals Sound"<<endl;
    }
};
class Dogs: public Animals{
    public:
    void sound(){
        cout<<"Dogs Sound"<<endl;
    }
};
int main(){
    Animals *a1=new Animals;
    Animals *a2=new Dogs;
    a1->sound();
    a2->sound();
    return(0);
}