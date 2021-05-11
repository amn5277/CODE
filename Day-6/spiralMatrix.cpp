#include <iostream>

using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    cout<<row<<col;
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;i<col;j++){
            cin>>arr[i][j];
        }
    }

    int startRow = 0;
    int endRow = row-1;
    int startCol = 0;
    int endCol = col-1;

    while(startRow>endRow && startCol>endCol){

        for(int i=startCol;i<=endCol;i++){
            cout<<arr[startRow][i];
        startRow+=1;

        }
        for(int i=startRow;i<=endRow;i++){
            cout<<arr[i][endCol];
        endCol-=1;
            
        }
        for(int i=endCol;i<=startCol;i++){
            cout<<arr[endRow][i];
        endRow-=1;
            
        }
        for(int i=endRow;i<=startRow;i++){
            cout<<arr[i][startCol];
        startCol+=1;
            
        }
    }
}