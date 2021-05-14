#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int N,x,k;
        cin>>N>>x>>k;
        if(k==0){
            cout<<"NO"<<endl;
            break;
        }
        if(x%k==0 || ((N+1)-x)%k==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}