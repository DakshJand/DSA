#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,2,3};
    int ans=0;
    for(int i ; i<5 ;i++){
        ans=ans^arr[i];
        
    }
    cout<<ans;
}