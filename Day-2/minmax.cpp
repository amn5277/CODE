#include <iostream>
#include <climits>

using namespace std;

int main(){
    int array_size;
    cin>>array_size;

    int arr[array_size];
    for(int i=0;i<array_size;i++){
        cin>>arr[i];
    }
    int  minNum = INT16_MAX;
    int maxNum = INT16_MIN;
    for(int i=0;i<array_size;i++){
        maxNum = max(maxNum,arr[i]);
        minNum = min(minNum,arr[i]);
    }
    cout<<"Min Number :"<<minNum<<endl;
    cout<<"Max Number :"<<maxNum;
}