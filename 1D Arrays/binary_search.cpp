//array should be sorted
//for this we locate the index by using mid terms.


#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,7};  
    int start = 0;
    int end = 4;
    int n = 7;

    while(start <= end){
        int mid = (start + end)/2;   
        if(arr[mid] == n){
            cout <<mid << endl;
            break;
        }
        else if(n > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return 0;
}



