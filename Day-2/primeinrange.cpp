#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n){
    
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
   
    for(int i=n1;i<n2;i++){
        if (isprime(i)){
            cout<<"Prime"<<i<<endl;
        }
    }
}