#include <algorithm>
#include <unordered_set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start_pointer = 0;
        int end_pointer = 0;
        unordered_set<int> unique_string;
        int maxi =0;
        cout<<s.size();
        while(end_pointer<s.size()){
            if(unique_string.find(s[end_pointer])==unique_string.end()){
                unique_string.insert(s[end_pointer]);
                end_pointer++;
                int size = unique_string.size();
                maxi = max(size,maxi);
            }
            else{
                unique_string.erase(s[start_pointer]);
                start_pointer++;
            }
        }
        return maxi;
        
    }
};