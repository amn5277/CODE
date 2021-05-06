#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd = arr[1]-arr[0];
    int ans=2,current=2;
    for(int i=1;i<n-1;i++){
        if (pd==arr[i+1]-arr[i]){
            current++;

        }
        else{
            current=2;
            pd=arr[i+1]-arr[i];
        }
        ans = max(ans,current);
        cout<<current<<ans<<endl;
    }
    
    cout<<ans;
}