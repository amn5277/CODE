vector<int> Solution::solve(vector<string> &A, string B) {
    vector<int> arr = {-1,-1};
    for (auto i=A.begin(),i!=A.end(),i++){
        
    }
    for(auto i=A.begin();i!=A.end();i++){
        int j=0;
        bool flag=true;
        string temp = *i;
        
        while(j<B.length()){
            if(temp[j]!=B[j]){
                flag=false;
                break;
            }
            j++;
        }

        if (flag){
            if(arr[0]==-1){
                arr[0]=i-A.begin();
            }
            else{
                    arr[1] = i-A.begin();
                }
            }
        
    
    }
    if (arr[1]==-1){
        arr[1]=arr[0];
    }
    return arr;
}
