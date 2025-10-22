#include <iostream>
using namespace std;
// A target will be given and we have to find 2 number from array which sum up to give target number.
int main(){
    int target;
    cin>>target;                                            //chosing target
    cout<<"The target number is -- "<<target<<endl;
    int arr[5];
    for(int i =0 ; i<5 ; i++){                              //input array
        cin>>arr[i];

    }
    for(int i =0 ; i<5 ; i++){
        cout<<i<<" ";  //output array
    }
    cout<<endl;

    
    for(int i =0 ; i<5 ;i++){                               //chosing pair sum
        for(int j=i+1; j<5 ; j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<endl;
                cout<<arr[j]<<endl;
            }
        }
    }

}