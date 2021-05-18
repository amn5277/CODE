#include<iostream>
#include<vector>
using namespace std;
void test(vector<int> &A){
    for(auto i=A.begin();i!=A.end();i++){
        cout<<i;
        cout<<*i;
    }
}
int main(){
    vector<int> A={1,2,3,4,5,6};
    test(A);
}