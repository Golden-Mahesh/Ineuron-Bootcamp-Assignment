#include<iostream>
#include<string.h>
using namespace std;
class mystring{
    private:
    char str[100];
    public:
    friend mystring& operator!(mystring &);
    void input_string(){
        cin.getline(str,100);
    }
     void Display_string(){
        cout<<str;
     }
    };
    mystring& operator!(mystring &s1){
                int i;
        for(i=0;s1.str[i];i++){
            if(s1.str[i]>=65&&s1.str[i]<=90){
                s1.str[i]=s1.str[i]+32;
            }
            else if(s1.str[i]>=97&&s1.str[i]<=122){
                s1.str[i]=s1.str[i]-32;
            }else{
                s1.str[i]=s1.str[i];
            }
        }
        return(s1);
    }
int main(){
    mystring s1;
    cout<<"Enter string";
    s1.input_string();
     s1= !s1;
     s1.Display_string();
}