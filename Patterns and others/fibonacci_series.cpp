#include<iostream>
using namespace std;
//fibonacci series --> The next number is sum of prev two numbers
int main(){
    int prev1st=0;
    int prev2nd=1;
    int current;
    cout<<prev1st<<" ";
    cout<<prev2nd<<" ";
    for(int i=0; i<10 ; i++){
        current=prev1st + prev2nd;
        cout<<current<<" ";
        prev1st=prev2nd;
        prev2nd=current;
        }
}