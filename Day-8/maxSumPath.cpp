// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int i =0;
        int j=0;
        int maxPathSum=0;
        int maxSumA = 0;
        int maxSumB = 0;
        while (i<l1 && j<l2){
          
          if (A[i]==B[j]){
              maxPathSum+=max(maxSumA+A[i],maxSumB+B[j]);
              i++;
              j++;
              maxSumA = 0;
              maxSumB = 0;


          }
          else if (A[i]>B[j]){
              maxSumB+=B[j];
              j++;
          }
          else{
              maxSumA+=A[j];
              i++;
          }
        }
        
        while(i<l1){
                maxSumA+=A[i];
                i++;
        }
     
    
        while(j<l2){
                maxSumB+=B[j];
                j++;
        }
    
        maxPathSum +=max(maxSumA,maxSumB);
        return maxPathSum;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}
