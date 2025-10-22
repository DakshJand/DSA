#include<iostream>
using namespace std;
//To identify wether the number is prime or not
int main(){
    int n;
    cin>>n;
    cout<<"The number which you want to check is -- "<<n<<endl;
    bool isprime=1;
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    
    }
    if(isprime==1){
        cout<<"It is a prime number";
    }
    else{
        cout<<"It is not a prime number";
    }
}

