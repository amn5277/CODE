#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int store_arr_size = 10;

    int store_arr[store_arr_size];
    int minRepIndex=INT16_MAX;

    for(int i=0;i<store_arr_size;i++){
        store_arr[i]=INT16_MIN;
    }
    for(int i=0;i<n;i++){
        if (store_arr[arr[i]]!=INT16_MIN){
            minRepIndex = max(minRepIndex,store_arr[arr[i]]);
        }
        else{
            store_arr[arr[i]]=i;
        }
    }
    cout<<minRepIndex;
}