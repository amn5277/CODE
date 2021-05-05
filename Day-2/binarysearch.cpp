#include <iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int s = 0;
    int e = size-1;
    int mid_point;
    while (s<=e){
        mid_point = s+(e-s)/2;
        if (arr[mid_point]==key){
            return mid_point+1;
        }
        else if (arr[mid_point]>key){
            e = mid_point;
        }
        else{
            s=mid_point;
        }
    }
    return -1;
}
int main(){
    int array_size;
    cin>>array_size;

    int arr[array_size];
    for(int i=0;i<array_size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,array_size,key);
    
}