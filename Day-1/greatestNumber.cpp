#include <iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    if (a>b){
        if (a>c){
            cout<<"Greatest Number is:"<<a;
            return 0;
        }
        else{
            cout<<"Greatest Number is :"<<c;   
        }
    }
    else {
        if (b>c){
            cout<<"Greatest Number is:"<<b;
            return 0 ;
        }
        else{
            cout<<"Greatest Number is :"<<c;   
            return 0;
        }
    }
    

}