#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(int i=0;i<10;i++)
      sum=sum+a[i];
    cout<<"Total sum of element is "<<sum;
    return(0);
}