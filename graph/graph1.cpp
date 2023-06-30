#include <iostream>
#include<utility>
#include<vector>
#include<unordered_map>
#include<iterator>
#include<list>
using namespace std;

void display(unordered_map<int,list<int>>&l){
    
    for(auto x:l){
        cout<<x.first<<"->";
        for(auto y:x.second){
            cout<<y<<" ";
        }
        cout<<endl;
        
    }
    
}

void adjList( vector<pair<int,int>>&v , unordered_map<int,list<int>>&l ){
    
    
    unordered_map<int,list<int>>m;
    vector<pair<int,int>> :: iterator it;
    
    for(it=v.begin();it!=v.end();it++){
        int x=it->first;
        int y=it->second;
        l[x].push_back(y);
        l[y].push_back(x);
    }
    
}



int main()
{
    vector<pair<int,int>>v;
    
    unordered_map<int,list<int>>m;
    
    v.push_back({1,2});
    v.push_back({3,4});
    v.push_back({1,6});
    adjList(v,m);
    display(m);

    
    
    return 0;
}
