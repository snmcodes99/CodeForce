#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int>digit;
    while(n>0){
        int y=n%10;
        digit.push_back(y);
        n=n/10;
    }
    reverse(digit.begin(),digit.end());
    for(int i=0;i<digit.size();i++){
        if(i==0){
            if(digit[i]==9)continue;
        }
        digit[i]=min(digit[i],9-digit[i]);
    }
    long long res=0;
    for(int i=0;i<digit.size();i++){
        res=res*10+digit[i];
    }
    cout<<res<<endl;
    return 0;
}