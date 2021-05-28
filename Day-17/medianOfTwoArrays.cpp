#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int final_array_size = nums1.size()+nums2.size();
        
        int start =0;
        int end = nums1.size()-1;
        int a,b;
        while(start<=end){
            int midpoint= (end+start)/2;
            int midpoint_second_Arr = ((final_array_size/2-(midpoint+1)))-1;
            if(nums1[midpoint]<=nums2[midpoint_second_Arr+1] && nums2[midpoint_second_Arr]<=nums1[midpoint+1]){
                a=midpoint;
                b = midpoint_second_Arr;
                break;
            }
            else if(nums1[midpoint]>nums2[midpoint_second_Arr+1]){
                end = midpoint-1;
            }
            else{
                start=midpoint+1;
            }
            cout<<midpoint<<" "<<midpoint_second_Arr<<endl;
        }
        cout<<a<<" "<<b<<endl;
        if (a==-1){
            a = a+1;
        }
        else if(b==-1){
            b+=1;

        }
        if(final_array_size%2==0){
            int m1 = max(nums1[a],nums2[b]);
            int m2 = min(nums1[a+1],nums2[b+1]);
            return (m1+m2)/2;
        }
        else{
            return min(nums1[a+1],nums2[b+1]);
        }
    }
};
int main(){
    Solution s;
    vector<int> a ={1,2};
    vector<int> b = {3,4};
    cout<<s.findMedianSortedArrays(a,b)<<endl;
}