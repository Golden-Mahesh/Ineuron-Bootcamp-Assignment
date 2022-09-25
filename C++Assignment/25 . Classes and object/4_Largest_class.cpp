#include<iostream>
using namespace std;
class LargestNumber{
    private:
       int max;
    public:
    void findMax(){
        int x , y, z;
        cout<<"Enter Three Numbers";
        cin>>x>>y>>z;
        if(x>y){
            if(x>z)
            max=x;
            else
            max=z;
        }
        else{
            if(y>z)
            max=y;
            else
            max=z;
        }
    }
    void Display(){
        cout<<max;
    }
};
int main(){
     LargestNumber l1;
     l1.findMax();
     l1.Display();    
}