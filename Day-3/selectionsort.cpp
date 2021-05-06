#include <iostream>
using namespace std;

void selectionSort(int arr[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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
    selectionSort(arr,n);

}