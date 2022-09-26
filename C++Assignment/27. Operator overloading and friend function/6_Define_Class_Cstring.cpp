#include<iostream>
using namespace std;
#include<string.h>
class CString {
 private:
 char s[50];
 public:
 CString operator+(CString s1){
    char * temp;
    temp=strcat(s,s1.s);
    strcpy(s1.s,temp);
    return(s1);
 }
 int operator==(CString s1){
   int x;
   return(strcmp(s,s1.s));
   if(x==0)
   return(1);
   else 
   return(0);
 }
 friend istream& operator>>(istream &cin,CString &s1);
 void showString(){
    cout<<s<<endl;
 }
};
istream& operator>>(istream &cin,CString &s1){
       cin.getline(s1.s,50);
    return(cin);
}
int main(){
    CString s1,s2,s3;
    cout<<"enter two string";
    cin>>s1>>s2;
    s3=s1+s2;
    s3.showString();
    if(s1==s2)
    cout<<"String Are Same ";
    else
    cout<<"String Are Not Same";
}