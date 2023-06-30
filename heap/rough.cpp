#include<iostream>
using namespace std;

void sum (int a){
    static int b=1;
    if(a>0){
        b++;a--;
        sum(a);
        cout<<b<<" ";
    }
    else{
        return;
    }
   
    }



    


int main(){
    int a=10;
    sum(a);
}