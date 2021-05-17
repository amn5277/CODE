#include<iostream>

#include<string>

using namespace std;
void substrings(string str,string ans){
    if (str==""){
        cout<<ans<<endl;
        return;
    }
    substrings(str.substr(1),ans);
    substrings(str.substr(1),ans+str[0]);
    
    return;
}

int main(){
    string str;
    getline(cin,str);

    substrings(str,"");
}