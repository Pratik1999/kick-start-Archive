#include<bits/stdc++.h>
using namespace std;
int sSort(string ar[],int n){
    string tmp;
    int cnt=0,j;
    for(int i=1;i<n;i++){
        tmp=ar[i];
        j=i-1;
        for(;j>=0 && tmp<ar[j];j--){
            ar[j+1]=ar[j];
        }
        if(j!=i-1)
            cnt++;
        ar[j+1]=tmp;
    }
    return cnt;
}
void solve(int c){
    int n;
    cin>>n;
    string ar[n];

    getline(cin,ar[0]);
    for(int i=0;i<n;i++){
        getline(cin,ar[i]);
	}
    cout<<"Case #"<<c<<": "<<sSort(ar,n)<<"\n";
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
    return 0;
}