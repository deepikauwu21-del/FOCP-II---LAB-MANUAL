/* A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
and identify the winner.*/
#include <iostream>
using namespace std;
int main(){
    int s1, s2, s3;
    cout<<"enter scores of 3 players";
    cin>>s1>>s2>>s3;

    if(s1>s2 && s1>s3){
        cout<<"player one is the winner";}
    else if(s2>s1 && s2>s3){
        cout<<"player 2 is the winner";}
    else if(s3>s1 && s3>s2){
        cout<<"player 3 is the winner";}
    else{
        cout<<"its a tie between the players";
    }
}