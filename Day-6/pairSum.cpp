#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s = 0;
    int end = n-1;
    
    while(end>s){
        
        if(arr[s]+arr[end]==k){
            cout<<s<<" "<<end;
            break;
        }
        else if (arr[s]+arr[end]>k){
            end--;
        }
        else{
            s++;
        }
    }
}