#include <iostream>

using namespace std;

int nPowerp(int n,int p){
    if (p==1){
        return n;
    }
    int prevPower = nPowerp(n,p-1);
    return n*prevPower;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<nPowerp(n,p);
}