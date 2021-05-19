#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > generateMatrix(int A) {
    
    vector<vector<int>> resultMatrix(A,vector<int>(A));
    int value =1;
    int startCol=0;
    int startRow = 0;
    int endRow =A;
    int endCol=A;
    
    while(startRow<endRow && startCol<endCol){
        
        for(int j=startCol;j<endCol;j++){
            resultMatrix[startRow][j] = value;
            value++;

        }
        startRow++;
        for(int i=startRow;i<endRow;i++){
            resultMatrix[i][endCol]=value;
            value++;
        }
        endCol--;
        for(int i=endCol;i<startCol;i++){
            resultMatrix[endRow][i]=value;
            value++;
            
        }
        endRow--;
        for(int i=endRow;i<startRow;i++){
            resultMatrix[i][startCol] = value;
            value++;
           
        }
         startCol++;
        
    }
    
    return resultMatrix;
}

int main(){
    int A=4;
    vector<vector<int>> result= generateMatrix(A);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[j].size();j++){
            cout<<result[i][j]<<endl;
        }
    }
    
}