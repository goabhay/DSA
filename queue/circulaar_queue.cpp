#include<iostream>
using namespace std;
class queue{
    private:
    int f;
    int r;
    int size;
    int *p;
    public:
    queue(int x){    // constructor
        f=0;
        r=0;
        size=x;
        p=new int[x];
    }
    void enqueue(int x);
    int dequeue();
    void display();
};

void queue::enqueue(int x){
    if((r+1)%size==f)
    cout<<"queue is full\n";
    else{
    r=(r+1)%size;       // moving r circularly
    p[r]=x;
}
}

int queue::dequeue(){
    int x=-1;
    if(f==r){
        cout<<"queue is empty\n";
    }
    else{
        x=p[f+1];
        f=(f+1)%size;
    }
    return x;
}

void queue::display(){
    while(f!=r){

        cout<<p[(f+1)%size]<<" ";
        f=(f+1)%size;
    }

}

int main(){
    int k;
    cout<<"enter the no. of elements you want to enter in queue\n";
    cin>>k;
    
    queue q(k+1);
    
    //q.enqueue(6);   // won't be taken beacuse in circular queue 1st index remain empty and f&r points there
    printf("enter the elements in queue\n");
    for(int i=0;i<k;i++){
        int n;
        scanf("%d",&n);
        q.enqueue(n);
    }

    for(int i=0;i<3;i++){
        q.dequeue();
    }

    q.enqueue(100);
    
    q.display();
    return 0;
}