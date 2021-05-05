#include <iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number to reverse :";
    cin>>number;
    int reverse = 0;
    int mod;
    while(number!=0){
        mod = number%10;
        reverse = reverse*10+mod;
        number = number/10;
    }
    cout<<"Reversed Number :"<<reverse<<endl;
}