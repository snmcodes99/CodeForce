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
        if(nums[i]>=nums[k-1]&&nums[i]>0){
            res++;
        }
    }
    cout<<res<<endl;
}