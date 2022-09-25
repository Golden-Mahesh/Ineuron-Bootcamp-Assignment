#include<iostream>
using namespace std;
int fact(int n);
int main(){
    int i ,j,flag=1,r;
    for(i=1;i<=4;i++){
        r=0;
        for(j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
                if(flag){
                    printf("%f",float(fact(i)/(fact(i-r)*fact(r))));
                    flag=1-flag;
                    r++;
                }
                else{
                    printf(" ");
                    flag=1-flag;
                }
            }
            else{
                printf(" ");
            }
        }
    }
}
int fact (int n){
    if(n==1)
    return(1);
    else 
    return(fact(n)*fact(n-1));
}