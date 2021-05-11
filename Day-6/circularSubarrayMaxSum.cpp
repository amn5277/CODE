#include <iostream>
using namespace std;
int kadance(int arr[],int n){
        int currentSum=0;
        int maxSum=INT8_MIN;
        for(int i=0;i<n;i++){
            currentSum=max(currentSum+arr[i],arr[i]);
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;
    }
int maxSubarraySumCircular(int arr[],int n) {
    
    int nonWrapSum = kadance(arr,n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    int wrapSum = totalSum+kadance(arr, n);
    cout<<max(wrapSum,nonWrapSum);
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    maxSubarraySumCircular(arr,n);
}