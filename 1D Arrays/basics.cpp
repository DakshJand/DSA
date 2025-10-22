#include <iostream>
using namespace std;
#include<vector>
int main(){
    int n; 
    cin>>n;
    cout<<"Number of elements you selected are-- "<<n;
    vector<int> arr(n);
    //Taking input in an array-->
    for(int i=0 ; i<n ; i++){
        cin>>i;

    }
    //Printing output in an array-->
    for(int i=0 ; i<n ; i++){
        cout<<i<<" ";

    }
    
}