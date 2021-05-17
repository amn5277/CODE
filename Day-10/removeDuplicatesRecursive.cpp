#include<iostream>
#include <string>
using namespace std;
string removeDuplicates(string str){
    if (str==""){
        return str;
    }
    string ansSoFar = removeDuplicates(str.substr(1));
    if (str[0]==ansSoFar[0]){
        return ansSoFar;
    }
    else{
        return str[0]+ansSoFar;
    }
}

int main(){
    string str;
    getline(cin,str);

    cout<<removeDuplicates(str);
}