#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> adj,unordered_set<int> &s1,unordered_set<int> &s2,int cur){
    if(s1.find(cur)!=s1.end())
        return true;
    if(s2.find(cur)!=s2.end())
        return false;
    s1.insert(cur);
    for(int i:adj[cur]){
        if(!dfs(adj,s2,s1,i))
            return false;
    }
    return true;

}
string solve(int c){
    unordered_map<string,int> um;
    int m,n=0;
    cin>>m;
    string s;
    vector<vector<int>> adj;
    int p1,p2;
    for(int i=0;i<m;i++){
        cin>>s;
        if(um.find(s)==um.end())
            um[s]=um.size();
        p1=um[s];
        cin>>s;
        if(um.find(s)==um.end())
            um[s]=um.size();
        p2=um[s];
        while(adj.size()<=um.size())
            adj.push_back({});
        adj[p1].push_back(p2);
    }
    unordered_set<int> s1;
    unordered_set<int> s2;
    bool res;
    for(int i=0;i<adj.size();i++){
        if(s2.find(i)!=s2.end())
            res=dfs(adj,s2,s1,i);
        else
            res=dfs(adj,s1,s2,i);
        if(!res)
            return "No";
    }
    return "Yes";
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case #"<<i<<": "<<solve(i)<<"\n";
    }
}