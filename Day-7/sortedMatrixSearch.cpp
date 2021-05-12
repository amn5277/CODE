#include<iostream>
using namespace std;

int main(){
     int row,col;
    int val;
    cin>>val;
    cin>>row>>col;

    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int i= 0;
    int j=col-1;
    bool flag=false;
    while(i<=row && j>0){

        if (arr[i][j]==val){
            cout<<i<<" "<<j<<" Value Found";
            flag=true;
            break;
        }
        else if(arr[i][j]>val){
            j--;
        }
        else{
            i++;
        }
    }
    if (!flag){
        cout<<"Not found";

    }
}