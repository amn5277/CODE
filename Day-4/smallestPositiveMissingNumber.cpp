#include <iostream>
using namespace std;

int main(){
    int p;
    cin>>p;

    int arr[p];
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }

    const long int size = 10;
    bool check[size];
    for(int i=0;i<size;i++){
        check[i]=false;
    }
    for(int i=0;i<p;i++){
        check[arr[i]]=true;
    }
    int ans=-1;
    for(int i=0;i<p+1;i++){
        if (check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans;
}