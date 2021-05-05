#include <iostream>

using namespace std;

int main(){
    int row,col;
    cout<<"Enter rows and columns of the rectangle :\t";
    cin>>row>>col;

    for(int i = 0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}