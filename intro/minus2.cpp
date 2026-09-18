#include<bits/stdc++.h>
using namespace std;
int minusTwo(vector<int>&nums){
    int odd=0;
    int e1=0;
    int e2=0;
    for(int x:nums){
        if(x%2!=0){
            odd++;
        }
        else{
            if((x/2)%2==0){
                e1++;
            }
            else{
                e2++;
            }
        }
    }
    return max(odd,max(e1,e2));
}
int main(){
    int test;
    cin>>test;
    while(test!=0){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        cout<<minusTwo(nums)<<endl;
        test--;
    }
    return 0;
}