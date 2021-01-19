#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265

void solve(int c){
    double v,d;
    cin>>v>>d;
    double ans=asin((d*9.8)/(v*v))/2.0;
    cout<<"Case #"<<c<<": "<<ans*(180/PI)<<"\n";
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
}