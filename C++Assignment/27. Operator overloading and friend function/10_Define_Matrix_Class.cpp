#include<iostream>
using namespace std;
class Matrix{
    private:
    int a[3][3];
    public:
    Matrix operator+(Matrix m2){
        int i,j;
        Matrix temp;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                temp.a[i][j]=a[i][j]+m2.a[i][j];
            }
        }
        return(temp);
    }
    void Input_Matrix(){
        int i,j;
        cout<<"Enter Matrix Element (3 X3) :"<<endl;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    void Display_Matrix(){
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};
int main(){
    Matrix m1,m2,m3;
    m1.Input_Matrix();
    m2.Input_Matrix();
    cout<<"First Matrix  :   "<<endl;
    m1.Display_Matrix();
    cout<<"Second Matrix   :   "<<endl;
    m2.Display_Matrix();
    m3=m1+m2;
    cout<<"Addition of Matrix   :"<<endl;
    m3.Display_Matrix();
}