#include<iostream>
using namespace std;
class queue{
    
    int first;
    int size;
    int last;
    int *p;
    public:
    queue(int n){
        first=-1;
        last=-1;
        size=n;
        p=new int[n];
    }
    void enqueue(int x){
        if(last==size-1){
            cout<<"no space"<<endl;
        }
        else{
        last++;
        p[last]=x;      
    }
    }
    int dequeue();
    void display();

};

int queue::dequeue(){
    int x=-1;
    if(first==last){
        cout<<"queue is empty\n";
    }
    else{

        x=p[++first];
    }
    return x;
}

void queue::display(){
    for(int i=first+1;i<=last;i++){
        cout<<p[i]<<" ";
    }
}

int main(){
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

cout<<q.dequeue()<<endl;
q.display();
cout<<endl;
cout<<q.dequeue()<<endl;
q.display();

}