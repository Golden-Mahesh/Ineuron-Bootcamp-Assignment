#include<iostream>
using namespace std;
class Time{
        private:
        int Hours;
        int Minutes;
        int Seconds;
        public:
        int operator==(Time t1){
            if(Hours==t1.Hours&&Minutes==t1.Minutes&&Seconds==t1.Seconds)
            return(1);
            else return(0);
        }
        friend ostream& operator<<(ostream &,Time t);
        friend istream& operator>>(istream &,Time &t);
};
  istream& operator>>(istream &cin,Time &t){
    cout<<"Enter Hours    :";
    cin>>t.Hours;
    cout<<endl<<"Enter Minutes   :";
    cin>>t.Minutes;
    cout<<endl<<"Enter Seconds   :";
    cin>>t.Seconds;
    return(cin);
  }
 ostream & operator<<(ostream &cout,Time t){
    cout<<"Hours   :"<<t.Hours<<endl<<"Minutes    :"<<t.Minutes<<endl<<"Seconds    :"<<t.Seconds<<endl;
         return(cout);
        }
int main(){
    Time t1,t2;
    cout<<"Enter First Time"<<endl;
    cout<<"........................."<<endl;
    cin>>t1;
    cout<<endl<<"First Time";
    cout<<t1;
    cout<<"Enter Second Time";
    cout<<endl<<"......................"<<endl;
    cin>>t2;
    cout<<t2;
    if(t1==t2)
    cout<<"Time are same";
    else{
        cout<<"Time are not same";
    }
}