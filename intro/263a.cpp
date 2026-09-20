#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>mat(5,vector<int>(5));
    int idxrow=-1;
    int idxcol=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                idxcol=j;
                idxrow=i;
            }
        }
    }
    int res=abs(2-idxcol)+abs(2-idxrow);
    cout<<res<<endl;
    return 0;
}