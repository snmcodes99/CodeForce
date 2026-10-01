#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if(s[0]==s[s.length()-1]){
            cout<<s<<endl;
        }
        else{
            s[0]=s[s.length()-1];
            cout<<s<<endl;
        }
    }
}