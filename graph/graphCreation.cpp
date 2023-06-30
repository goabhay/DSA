#include <iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<iterator>

using namespace std;

class graph{
    public:
    
    unordered_map<int,list<int>>m;
    
   void addAdj(int a,int b,bool direction){
        if(direction==1){
            m[a].push_back(b);
        }
        else{
            m[a].push_back(b);
            m[b].push_back(a);
        }
    }
    
    void display(){
        
    // for(auto x:m){             //using for each loop
    //     cout<<x.first<<"->";
    //     for(auto y:x.second){
    //         cout<<y<<",";
    //     }
    //     cout<<endl;
    // }
    
    unordered_map<int,list<int>> :: iterator it;
    list<int> :: iterator it1;
    
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<"->";
        for(it1=it->second.begin();it1!=it->second.end();it1++){
            cout<<" "<<*it1<<",";
        }
        cout<<endl;
    }
    }
    
};



int main()
{
    graph g;
    
    g.addAdj(1,2,0);
    g.addAdj(2,3,0);
    g.addAdj(3,1,0);
    
    g.display();
   return 0;
    }
   