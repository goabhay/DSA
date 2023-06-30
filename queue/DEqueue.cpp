// doesn't follow FIFO rule
#include<iostream>
using namespace std;

class queue{
    private:
    int r,f;
    int size;
    int *p;
    public:
    queue(int x){
        f=r=-1;
        size=x;
        p=new int[size];
    }

    void enqueue(int x);
    void enqueueF(int x);
    int dequeue();
    int dequeuR();
    void display();
};

void queue::enqueue(int x){
    if(r==size-1)
    cout<<"queue is full\n";
    else{
    r++;
    p[r]=x;
}
}

int queue::dequeue(){
    int x=-1;
    if(r==f)
    cout<<"queue is empty\n";
    else{
        x=p[f++];
    }
    return x;
}

int queue::dequeuR(){
    int x=-1;
    if(f==r)
    cout<<"queue is empty\n";
    else{
        x=p[r--];
    }
}

void queue::enqueueF(int x){

    if( f==-1)
    cout<<"queue is full\n";

    else {
        p[f]=x;
        f--;
    }
}

void queue::display(){
    for(int i=f+1;i<=r;i++){
        cout<<p[i]<<" ";
    }
}

int main(){
    int k;
    cout<<"enter the no. of element to be entered in queue\n";
    cin>>k;
    queue q(k);
    cout<<"enter the elements in queue\n";
    for(int i=0;i<k;i++){
        int n;
        cin>>n;
        q.enqueue(n);
    }
q.dequeue();
q.enqueueF(100);
q.dequeuR();
q.display();

return 0;

}



