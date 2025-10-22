#include <iostream>
using namespace std;
int main(){
    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 2, 4, 3};
    for(int i=0 ; i<4; i++){
        for(int j=0 ;j<4 ;j++){
            if(arr1[i]==arr2[j] && arr2[j]!=-1){
                cout<<arr1[i];
                arr2[j]=-1;
                break;
            }
        }
    }
}

//like it is not much important to write arr2[j]!=-1