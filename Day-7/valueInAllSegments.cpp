#include <iostream>

using namespace std;

int main(){
    int n,k,value;

    cin>>n>>k>>value;
    int attempt=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i =0;
    bool flag=true;
    while(i<n){
        if (attempt>k){
            cout<<"Not found in all segement";
            flag=false;
            break;
        }
        if (arr[i]!=value){
            attempt+=1;
            i++;
        }
        else{
            attempt=0;
            if (n>i+k){
                i+=k;
            }
            else{
                break;
            }
        }
    


    }
    if (flag){
        cout<<"Found in all segements";
    }

}