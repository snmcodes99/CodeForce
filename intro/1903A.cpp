#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k>=2){
            cout<<"YES"<<endl;
            continue;
        }
        bool sort=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                sort=false;
                break;
            }
        }
        if(sort)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}