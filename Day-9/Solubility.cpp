#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int X,A,B;
    
        cin>>X>>A>>B;

        cout<<(A+(100-X)*B)*10<<endl;
    }
    

}