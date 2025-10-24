// Wave print--> print from top to bottom then bottom to top then top to bottom
#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={ {1 ,1 , 1} , {2 ,2 ,2} , {3 ,3 ,3}};
    for(int j=0 ; j<3 ; j++){
        if(j%2 != 0){
            for(int i =2 ; i>0 ; i--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        
        }
        
        else{
            for(int i =0; i<3 ; i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;

        }
        
    }
}