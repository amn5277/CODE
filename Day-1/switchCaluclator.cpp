#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter Two Numbers:";
    cin>>n1>>n2;

    char input;
    cout<<"Enter the operation to perform";
    cin>>input;
    switch (input){
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Invalid Input";
        
    }
}