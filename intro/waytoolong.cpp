#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;

            continue;
        }
        string res="";
        res=res+s[0];
        res+=to_string(s.length()-2);
        res=res+s[s.length()-1];
        cout<<res<<endl;
    }
    return 0;
}