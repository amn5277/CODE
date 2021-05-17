#include<iostream>

using namespace std;
int waysToParty(int n ){

    if (n==1||n==2){
        return n;
    }

    return waysToParty(n-1)+((n-1)*waysToParty(n-2));
}
int main(){
    int n;
    cin>>n;

    cout<<waysToParty(n);
}