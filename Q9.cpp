/*A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a 
solution to classify the symbol. */
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character=";
    cin>>ch;

    if(ch>='0' && ch<='9'){
        cout<<"it is a number";
    }
    else if ((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z')){
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"its a vowel";
        }
        else{
            cout<<"its a consonant";
        }
    }
    else{
        cout<<"its a specail character";
    }
}