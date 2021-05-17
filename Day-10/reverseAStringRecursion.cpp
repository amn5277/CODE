#include <iostream>
#include <string.h>
using namespace std;
string reverse(string str){
    if(str==""){
        return "";
    }
    return reverse(str.substr(1))+str[0];
}

int main(){
    string str;
    getline(cin,str);


    cout<<reverse(str);
}