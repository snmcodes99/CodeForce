#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<vector<int>>problem(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>problem[i][0];
            cin>>problem[i][1];
            cin>>problem[i][2];
        }
        int res=0;
        for(int i=0;i<n;i++){
            int c=0;
            if(problem[i][0]==1){
                c++;
            }
            if(problem[i][1]==1){
                c++;
            }
            if(problem[i][2]==1){
                c++;
            }
            if(c>=2){
                res++;
            }
        }
        cout<<res<<endl;
}