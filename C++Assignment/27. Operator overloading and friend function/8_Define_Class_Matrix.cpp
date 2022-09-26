#include<iostream>
using namespace std;
class Matrix{
       private:
       int a[3][3];
       public:
       Matrix operator-(){
        int i,j;
        Matrix m1;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                a[i][j]=-a[i][j];
                m1.a[i][j]=a[i][j];
                }
        }
        return(m1);
       }
       void input_element(){
        int i,j;
        printf("Enter Elements :  ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
        }
       }
       void display_element(){
        int i,j;
        printf("Matrix is :\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
        }
        printf("\n");
       }
};
int main(){
 Matrix m1,m2;
 m1.input_element();
 m1=-m1;   
 m1.display_element();
}