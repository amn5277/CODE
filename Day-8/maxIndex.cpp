#include <iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int maxToRight[n];
    int maxSoFar = INT16_MIN;
    for(int i=n-1;i>=0;i--){
        maxSoFar = max(arr[i],maxSoFar);
        maxToRight[i]=maxSoFar;
        
    }
    int result = 0;
    for(int i =0;i<n;i++){
        
        int low = i+1;
        int high = n-1;
        int ans=i;
        while(high>low){
            int mid = int((high+low)/2);
            
            if (arr[i]<=maxToRight[mid]){
                ans = max(ans,mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        result = max(result,ans-i);

    }
    cout<<result;
}