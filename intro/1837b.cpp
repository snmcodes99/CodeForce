#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<char>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int maxi=1;
        int count=1;
        char prev='.';
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                count++;
            }
            else{
                count=1;
            }
            maxi=max(maxi,count);
        }
        cout<<maxi+1<<endl;
    }
    return 0;
}