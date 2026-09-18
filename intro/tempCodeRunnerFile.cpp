#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(nums[i]>=nums[k]){
            res++;
        }
    }
    cout<<res<<endl;
}