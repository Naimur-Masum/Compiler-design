#include<bits/stdc++.h>
using namespace std;
void outpute(){
    string s;
    cin>>s;
    if(s[0]=='/' && s[1]=='/'){
        cout<<"single line comment"<<endl;
    }
    else if(s[0]=='/' && s[1]=='*' && s[s.size()-2]=='*' && s[s.size()-1]=='/'){
        cout<<"multiple line comment"<<endl;
    }
    else{
        cout<<"not comment line"<<endl;
    }

}
int main(){
    outpute();
}
