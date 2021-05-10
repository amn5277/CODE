#include <iostream>

using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int currentSum=0;
    int maxSum=INT16_MIN;
    cout<<n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        currentSum=max(arr[i],currentSum+arr[i]);
        cout<<currentSum<<" ";
        maxSum=max(currentSum,maxSum);
        cout<<maxSum<<endl;
    }
    cout<<maxSum;
    
   
    
}