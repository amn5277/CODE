#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];

    cin>>arr;
    bool flag=true;

    for(int i =0 ;i<n/2+1;i++){
        if (arr[i]!=arr[n-1-i]){
            flag=false;
        }
    }
    if (flag){
        cout<<"Its a Palindrom";
    }
    else{
        cout<<"Not a palindrom";
    }
}