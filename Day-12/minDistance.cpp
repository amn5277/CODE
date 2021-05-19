
int Solution::solve(string A) {
        int prev_index_o = -1;
        int prev_index_x = -1;
        int min_diff = A.length()+1;
        bool flag=true;
        for(int i=0;i<A.length();i++){
            if (A[i]=='o'){
                if(prev_index_x==-1){
                    prev_index_o=i;
                }
                else{
                    min_diff = min(i-prev_index_x,min_diff);
                    prev_index_o=i;
                    flag=false;
                }
            }
            else if(A[i]=='x'){
                if(prev_index_o!=-1){
                    min_diff = min(i-prev_index_o,min_diff);
                    flag=false;
                }
                prev_index_x=i;
            }
            
        }
        if (flag){
            return -1;
        }
        return min_diff;
}
