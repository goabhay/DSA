#include<bits/stdc++.h>

using namespace std;


void dfs(unordered_map<int,list<int>>mp,int val,stack<int>&st){
    static unordered_map<int,bool>visited;
    
    
    // cout<<val<<",";
    visited[val]=true;
    for(auto x:mp[val]){
        if(!visited[x]){
            visited[x]=true;
            dfs(mp,x,st);
           
        }
       
    }
    st.push(val);
    
}


int main(){
    
    vector<pair<int,int>>v{{1,2},{2,4},{4,5},{1,3}};
    
    unordered_map<int,list<int>>mp;
    
    for(auto x:v){
        int a=x.first;
        int b=x.second;
        
        mp[a].push_back(b);
        // mp[b].push_back(a);
    }
    
    // for(auto x:mp){
    //     cout<<x.first<<"->";
    //     for(auto y:mp[x.first]){
    //         cout<<y<<",";
    //     }
    //     cout<<endl;
    // }
    
    
    unordered_map<int,list<int>>:: iterator it;
    it=mp.begin();
    
    stack<int>st;
    dfs(mp,1,st);
    
  while(!st.empty()){
      cout<<st.top()<<",";
      st.pop();
  }
    
    return 0;
    
}