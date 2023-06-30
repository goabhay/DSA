#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<iterator>
#include<queue>
using namespace std;

unordered_map<int,list<int>> adjList(vector<pair<int,int>>v,bool direction){

unordered_map<int,list<int>>m;

    for(int i=0;i<v.size();i++){
int x=v[i].first;
int y=v[i].second;

if(direction==false){
m[x].push_back(y);
m[y].push_back(x);
    }
    else{
m[x].push_back(y);
    }
}
return m;
}



// display
void display(unordered_map<int,list<int>>&l){
    for(auto x:l){
        cout<<x.first<<"->";
        for(auto y:x.second){
            cout<<y<<",";
        }
        cout<<endl;
    }
}

void bfs(vector<pair<int,int>>v,bool direction){

unordered_map<int,list<int>>map=adjList(v,direction);          // adjacency list representing graph
unordered_map<int,bool>visited;                                // map showing if the node is visited or not
vector<int>ans;
queue<int>q;

unordered_map<int,list<int>> :: iterator it;

it=map.begin();

q.push(it->first);

while(!q.empty()){
    int x=q.front();
    q.pop();
    visited[x]=1;
    cout<<x<<" ";

    for(auto y:map[x]){
        if(!visited[y]){
            q.push(y);
            visited[y]=1;
        }
    }

}
    
}

void dfsDisplay(unordered_map<int,list<int>>&m,unordered_map<int,bool>&visited,int i){
   
   cout<<i<<" ";
visited[i]=1;
   for(auto x:m[i]){
    if(!visited[x]){
        visited[x]=1;
        dfsDisplay(m,visited,x);
    }

   }
}

void dfs(vector<pair<int,int>>v){   // assuming undirected graph

                                   // adjacency list representing graph
unordered_map<int,bool>visited;                                // map showing if the node is visited or not
vector<int>ans;
unordered_map<int,list<int>>map;
map=adjList(v,false);
unordered_map<int,list<int>>::iterator it;
it=map.begin();
visited[it->first]=1;
dfsDisplay(map,visited,it->first);



}


int main(){

vector<pair<int,int>>v{{10,20},{20,50},{30,10},{30,40},{40,50}};
dfs(v);

    return 0;
}

