/* A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two 
3×3 matrices and compute their sum*/
#include <iostream>
using namespace std;
int main(){
    int matrix_1[3][3];
    int matrix_2[3][3];
    int sum[3][3];
    for(int i=0;i<3;i++){
        cout<<"enter the values for 1st matrix "<<i+1<<":\n";
        for(int j=0;j<3;j++){
            cin>>matrix_1[i][j];
        }
    }
    for(int i=0;i<3;i++){
       cout<<"enter the value sfor 2nd matrix "<<i+1<<":\n";
       for(int j=0;j<3;j++){
       cin>>matrix_2[i][j];
       }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=matrix_1[i][j] + matrix_2[i][j];
        }
    }
    cout<<"sum of the two matrices \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}