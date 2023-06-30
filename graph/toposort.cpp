#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<iterator>
#include<stack>
using namespace std;

unordered_map<int,list<int>> adj(vector<pair<int,int>>v){
     
     unordered_map<int,list<int>>m;
     // for directed graph
     for(auto x:v){
        int a=x.first;
        int b=x.second;

        m[a].push_back(b);
     }
     return m;

}

void dfs(unordered_map<int,list<int>>map,int i){

static unordered_map<int,bool>visited;
    
    
static stack<int>st;
if(!visited[i]){
    for(auto j:map[i]){
        cout<<j<<" ";
            visited[j]=true;
            dfs(map,j);         
        }
        st.push(i);
    }

     cout<<st.top();
}
    
    


void topoSort(vector<pair<int,int>>v){

 unordered_map<int,list<int>>map;
 
 map=adj(v);

for(auto x:map){
    cout<<x.first<<"->";
    // for(auto j:map[x.first]){
    //     cout<<j<<",";
    // }
    cout<<endl;
}

 unordered_map<int,list<int>> :: iterator it;

 it=map.begin();

 
dfs(map,it->first);




}


int main(){
    vector<pair<int,int>>v{{1,2},{1,3},{3,4},{4,5},{2,6},{6,5}};
}
