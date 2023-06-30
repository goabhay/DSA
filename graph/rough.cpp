#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<pair>
using namespace std;

int main(){

    vector<pair<int,int>>v{{1,2},{2,3},{3,4},{4,5},{5,1}};

    unordered_map<int,list<int>>m;

    for(auto x:v){
        int a=x.first;
        int b=x.second;
        m[a].push_back(b);
        m[b].push_back(a);
    }

    // for(auto x:m){
    //     cout<<x.first<<"->"<<" ";
    //     for(auto y:x.second){
    //         cout<<y<<",";
    //     }
    //     cout<<endl;
    // }

    //bfs 
    unordered_map<int,bool>visited;

    
        queue<int>q;
        
       unordered_map<int,list<int>>:: iterator it;
       it=m.begin();

       q.push(it->first);
       

int a;
        while(!q.empty()){
             a=q.front();
              q.pop();
             cout<<a<<",";
             visited[a]=true;
          

            for(auto y:m[a]){
                if(!visited[y]){
                    q.push(y);
                    visited[y]=true;
                }
            }
        }
    

}