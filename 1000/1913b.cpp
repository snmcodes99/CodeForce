#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int c1=0;
        int c0=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                c1++;
            }
            else{
                c0++;
            }
        }
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(c1==0)break;
                c1--;
            }
            else{
                if(c0==0)break;
                c0--;
            }
        }
        int res=s.length()-i;
        cout<<res<<endl;
    }
    return 0;
}