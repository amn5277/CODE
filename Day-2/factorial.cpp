#include <iostream>

using namespace std;

int fac(int n){
    int fact=1;
    for(int i =2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int num;
    cin>>num;
    cout<<fac(num);
}