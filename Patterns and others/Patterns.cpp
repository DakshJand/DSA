#include<iostream>
using namespace std;
/* @@@
   @@@
   @@@
   */
   void pattern1(){
for(int i=0 ; i<3 ; i++){
    for(int j=0; j<3 ; j++){
        cout<<"@";

    }
    cout<<endl;
}

}

/*.  @
     @@
     @@@
*/
void pattern2(){
    for(int i = 0 ; i<4 ; i++){
        for(int j=0 ; j<i ; j++){
            cout<<"@";
        }
        cout<<endl;
    }
}

/*
    @@@@
    @@@
    @@
    @
*/
void pattern3(){
    for(int i = 4 ; i>0; i--){
        for(int j=0 ; j<i ; j++){
            cout<<"@";
        }
        cout<<endl;
    }
}

/*
        @
       @@@
      @@@@@
*/
void pattern4(){
    for(int i=0 ; i<4 ; i++){
        for(int j=0; j<3-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1 ; j++){
            cout<<"@";
        }
        cout<<endl;
    }
}

/*
@@@@@@@
 @@@@@
  @@@
   @
*/
void pattern5(){
    for(int i = 0 ; i<4 ; i++){
        for(int j=0 ; j<i ; j++){
            cout<<" ";
        
        }
        for(int j=0 ; j<(2 * (4 - i) - 1) ; j++){
            cout<<"@";
        }
        cout<<endl;
    } 
}


int main(){
    //pattern1();
    //pattern2();
    //pattern3();
    //pattern4();
    //pattern5();
}