#include <iostream>
using namespace std;
//Finding min value in an array-->
void min_arr(){
int arr[5]={4,7,5,1,9};
int n=4;
for(int i =0 ; i<5 ; i++){
    if(n>arr[i]){
        n=arr[i];
    }
}
cout<<n;
}
//Finding max value in an array-->
void max_arr(){
    int arr[5]={4,7,5,1,9};
    int n = 4;
    for(int i =0 ; i<5 ; i++){
        if(n<arr[i]){
            n=arr[i];
        }
    }
    cout<<n;
}



int main(){
//min_arr();
//max_arr();


} 