#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(auto &num:nums){
            cin>>num;
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int c1=nums[n-1]-nums[0];
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int c2=maxi-nums[0];
        int c3=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            c3=max(c3,nums[i]-nums[i+1]);
        }
        int mini=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            mini=min(mini,nums[i]);
        }
        int c4=nums[n-1]-mini;
        cout<<max(c1,max(c2,max(c3,c4)))<<endl;
    }
}