#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum,current;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            current=arr[j];
            sum+=current;
            cout<<sum<<"\t";
        }
        cout<<endl;
    }
}