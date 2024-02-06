#include<bits/stdc++.h>
using namespace std;

void output(){
    bool f=1;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            cout<<"not numerical"<<endl;
            f=0;
            break;
        }

    }
    if(f){
        cout<<"numeric constant"<<endl;

    }
}
int main(){

        output();

}
