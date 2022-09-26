#include<iostream>
using namespace std;
class fraction{
   private:
   long numerator;
   long denominator;
   public:
   fraction(long n=0,long d=0){
    numerator=n;
    denominator=d;
   }
    fraction operator++(int){
         fraction temp;
   temp.numerator=numerator++;
       temp.denominator=denominator++;
return(temp);
    }
   fraction operator++(){
      fraction f1;
      f1.numerator=numerator+=1;
      f1.denominator=denominator+=1;
      return(f1);
   }
   friend ostream& operator<<(ostream&fcout,fraction);
   friend istream& operator>>(istream&fcin,fraction&temp);
};

ostream& operator<<(ostream&fcout,fraction temp){
   fcout<<temp.numerator<<"/"<<temp.denominator<<endl;
}
istream& operator>>(istream &fcin,fraction &temp){
   cout<<"Numerator   :";
   fcin>>(temp.numerator);
   cout<<"Denominator   :";
   cin>>(temp.denominator);
   return(fcin);
}
int main(){
fraction f1,f2;
cout<<"Enter Ist Fraction Value"<<endl;
cin>>f1;
f1++;
cout<<"f1++    :  "<<f1;
++f1;
cout<<"++f1    :  "<<f1;
cout<<"Enter 2nd Fraction Value"<<endl;
cin>>f2;
f2=++f1;
cout<<"f1      :  "<<f1;
cout<<"f2      :   "<<f2;
f2=  f1++;
cout<<"f1      :   "<<f1;
cout<<"f2      :   "<<f2;  
}