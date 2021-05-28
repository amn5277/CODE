#include <iostream>
#include<vector>
#include<climits>

using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        vector<int> prefix_max(n,height[0]);
        vector<int> suffix_max(n,height[n-1]);
        // prefix_max[0] = height[0];
        // suffix_max[n-1] =height[n-1];
        for(int i=1;i<n;i++){
            prefix_max[i] = max(prefix_max[i-1],height[i]);
            suffix_max[n-i-1] =max(suffix_max[n-i],height[n-i-1]);
            
            
        }
        int trapped_area = 0;
        int possible_area;
        for(int building =1;building<n-1;building++){
            possible_area =min(prefix_max[building-1],suffix_max[building+1]);
            
            if(possible_area>height[building]){
                trapped_area+=possible_area-height[building];
            }
            
        }
        return trapped_area;
    }
};
int main(){
    Solution s;
    vector<int> a={};
 
    cout<<s.trap(a);
}