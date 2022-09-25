#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
    int student_id;
    char name[20];
    char email[50];
    int age;
    public:
    student(int x,char n[20],char e[50],int a){
        student_id=x;
        strcpy(name,n);
        strcpy(email,e);
        age=a;
        }
    void showData(){
     cout<<"Studen_id="<<student_id<<endl<<"Name="<<name<<endl<<"Email="<<email<<endl<<"Age="<<age<<endl;
    }
    void setData(int x,char n[20],char e[50],int a){
                student_id=x;
        strcpy(name,n);
        strcpy(email,e);
        age=a;
    }
};
int main(){
   student s1(4016,"Mahesh","maheshme2002@gmail.com",20);
   s1.showData();
   
}