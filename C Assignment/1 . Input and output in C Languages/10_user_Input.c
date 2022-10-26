#include<stdio.h>
int main(){
        int d1, m1, year;
    printf("Enter date (dd/mm/yy): ");
    scanf("%d/%d/%d", &d1,&m1,&year);
    printf("Day-%d , Month - %d Year-%d",d1,m1,year);
    return(0);
}