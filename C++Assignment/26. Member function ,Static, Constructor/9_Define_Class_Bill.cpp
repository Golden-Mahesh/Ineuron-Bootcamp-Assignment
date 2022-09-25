#include<iostream>
using namespace std;
class Bill{
   private:
   char name[20];
   int unit;
   float Bill;
  public:
  void get(){
    cout<<"Enter customer Details Name=";
    cin.getline(name,20);
    cout<<"Unit=";
    cin>>unit;
  }
  void calculate_Bill(){
    if(unit<100){
        Bill=unit*1.20;
    }
    else if(unit>100&&unit<200)
    Bill=unit*2.0;
    else{
        Bill=unit*3.0;
    }
  }
  void ShowBill(){
    cout<<"Bill="<<Bill<<endl;
  }
};
int main(){
 Bill b1;
 b1.get();
 b1.calculate_Bill();
 b1.ShowBill();
}