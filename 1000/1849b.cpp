#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n, k;
        cin>>n>>k;
        vector<int>nums(n);
        for(auto& num:nums){
            cin>>num;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                nums[i]=k;
                continue;
            }
            nums[i]=nums[i]%k;
        }
        vector<pair<int,int>>v(n);
        for(int i=0;i<nums.size();i++){
            v[i].first=nums[i];
            v[i].second=i;
        }
        sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first>b.first;
        });
        vector<int>res(n);
        for(int i=0;i<v.size();i++){
            res[i]=v[i].second+1;
        }
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}