#include<iostream>
using namespace std;
class Bank{
    private:
    int principal;
    int year;
    static float roi;
    float interest;
    public:
    Bank(int p,int y){
        principal=p;
        year=y;
    }
    Bank(){
        principal=0;
        year=0;
    }
   void calculate_interest(){
    interest=(principal*year*roi)/100.0;
    }
    void Display_interest(){
        cout<<interest<<endl;
    }
    static void setRoi(int r){
        roi=r;
    }
   };
float Bank::roi=2;
int main(){
 Bank b1(1000,2);
 b1.calculate_interest();
 b1.Display_interest();
}