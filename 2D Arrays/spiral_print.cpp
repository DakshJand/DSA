//(printing from  1st row then last coumn then last row  then first column) 1st Iteration 
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1,2,3},
                      {4,5,6},
                      {7,8,9} };
    
    int top = 0, bottom = 2, left = 0, right = 2;

    while(top <= bottom && left <= right) {
        
        for(int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        
        for(int j = top; j <= bottom; j++)
            cout << arr[j][right] << " ";
        right--;

        
        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        
        if(left <= right) {
            for(int j = bottom; j >= top; j--)
                cout << arr[j][left] << " ";
            left++;
        }
    }

    return 0;
}