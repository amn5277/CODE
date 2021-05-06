#include <iostream>

using namespace std;

void insertion_sort(int arr[],int size){

    int current ;
    for(int i=1;i<size;i++){
        current =arr[i];
        int j=i-1;
        while(j>=0){
            if(current<arr[j]){
                arr[j+1] = arr[j];
                arr[j]=current;
                j--;
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
}