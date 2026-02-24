/*Create a function: 
double calculateEMI(double P, double R = 0.01, int T = 12); 
Use the standard EMI formula. */
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double calculateEMI(double P, double R = 0.01, int T = 12){
    double num = P*R*pow(1+R,T);
    double den = pow(1+R,T)-1;
    return num/den;
}
int main(){
    double P,R;
    int T;
    cin>>P;
    if(cin>>R>>T){
        cout<<fixed<<setprecision(2)
            <<calculateEMI(P,R,T);
    }
    else{
        cout<<fixed<<setprecision(2)
            <<calculateEMI(P);
    }
    return 0;
}
