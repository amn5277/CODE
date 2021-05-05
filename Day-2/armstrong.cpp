#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;
    
    cin>>num;
    int temp = num;
    int sum=0;
    while(num!=0){
        sum+=pow(num%10,3);
        num=num/10;
    }
    if (sum==temp){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}