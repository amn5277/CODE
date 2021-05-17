#include <iostream>
#include <string>
using namespace std;
string moveX(string str){
    if (str==""){
        return "";
    }
    string ansSoFar = moveX(str.substr(1));
    if (str[0]=='x'){
        return ansSoFar+str[0];
    }
    else{
        return str[0]+ansSoFar;
    }
}

int main(){
    string str;
    getline(cin,str);

    cout<<moveX(str);
    return 0;
}
