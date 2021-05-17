#include <iostream>
#include<string>

using namespace std;
string replacePi(string str){
    if (str==""){
        return "";
    }
    
    if (str[0]=='P' && str[1]=='i'){
        string strSoFar = replacePi(str.substr(2));
        return "3.14"+strSoFar;
    }
    else{
        string strSoFar = replacePi(str.substr(1));
        return str[0]+strSoFar;
    }
}
int main(){
    string str;
    getline(cin,str);

    cout<<replacePi(str);
}