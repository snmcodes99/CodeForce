#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res="";
    for(auto&x :s){
        x=tolower(x);
    }
    for(char c:s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
            continue;
        }
        res+='.';
        res+=c;
    }
    cout<<res<<endl;
    return 0;
}