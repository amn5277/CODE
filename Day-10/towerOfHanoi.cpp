#include<iostream>

using namespace std;

void towerofHanoii(int elements,char src,char des,char helper){
    if (elements==0){
        return;
    }
    towerofHanoii(elements-1,src,helper,des);

    cout<<"Move a element from"<<src<<"-->"<<des<<endl;
    towerofHanoii(elements-1,helper,des,src);

}
int main(){
    
    int element;
    cin>>element;
    towerofHanoii(element,'A','C','B');
    return 0;
}