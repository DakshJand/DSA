#include <iostream>
using namespace std;
int main(){
    
    //input rows and columns

    int arr[3][3];
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>>arr[i][j];

        }
        cout<<endl;
    }

    //output rows and columns
    
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}

