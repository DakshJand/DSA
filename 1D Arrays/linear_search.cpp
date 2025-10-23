// Searching for a number weather it is present or not and printing its index
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,7,5};
    int n;
    cin>>n;
    cout<<"The number you want to check is-- "<<n<<endl;
    bool isfound=0;
    for(int i = 0 ; i<5 ; i++){
        if(arr[i]==n){
            isfound=1;
            cout<<i<<endl;
            break;
        }
        
    }
    if(isfound==0){
        cout<<-1;
    }

}


//we use boolean in these cases where the printing can occur more than once.
//in boolean we have to define the outer loop variable and the inner bool variable to be opposite always.
