#include<bits/stdc++.h>
using namespace std;

void dfs(unordered_map<int,list<int>>map,int i){

static unordered_map<int,bool>visited;

if(visited[i]==true){
    return;
}


if(!visited[i]){
    
cout<<i<<",";
    visited[i]==true;
    for(auto x:map[i]){
        dfs(map,x);
    }
}   

}
    


int main(){

    vector<vector<int>>v{
        {1,2},
        {1,3},
        {2,4},
        {3,5},
        {4,5}
    };

    unordered_map<int,list<int>>adj;
unordered_map<int,bool>visited;

    for(int i=0;i<v.size();i++){
       int x=v[i][0];
       int y=v[i][1];

       adj[x].push_back(y);
       adj[y].push_back(x);
    }
unordered_map<int,list<int>>::iterator it;
it=adj.begin();
dfs(adj,it->first);
    
}



