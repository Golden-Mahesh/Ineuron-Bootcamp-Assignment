#include<iostream>
using namespace std;
class Date{
  private:
  int date;
  int month;
  int year;
  public:
  Date(int x,int y,int z){
    date=x;
    month=y;
    year=z;
  }
  void setDate(int x,int y,int z){
    date=x;
    month=y;
    year=z;
  }
  void showDate(){
    cout<<date<<"/"<<month<<"/"<<year<<endl;
  }
};
int main(){
    Date d1(12,9,2022);
    d1.showDate();
}



