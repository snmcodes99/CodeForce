#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    int l;
    int c;
    int d;
    int p;
    int nl;
    int np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=(k*l)/(n*nl);
    int slice=(c*d)/(n);
    int salt=(p)/(np*n);
    cout<<min(drink,min(salt,slice))<<endl;
    return 0;
}