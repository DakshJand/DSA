#include <iostream>
using namespace std;
int main(){
    
    int arr[3][3]={ {1 ,1 , 1} , {2 ,2 ,2} , {3 ,3 ,3}};
    for (int j = 0; j < 3; j++) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += arr[i][j];
        }
        cout<<sum;
    }

}



    
