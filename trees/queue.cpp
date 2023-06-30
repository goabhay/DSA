#include<iostream>
using namespace std;

class queue{
    private:
    // can be accseesd by member function only (cann't be accessed from main function)
    int first;
    int rear;
    int size;
    int *p;

    public:

    queue(int size){        // parametrised constructor
        p= new int[size];
        this->size=size;
        first=rear=-1;
        
    }

    // class member function

    void enqueue(int x);   
    int dequeue();
    int isEmpty();
    void display();
    int isempty();
    int isfull();
};



void queue :: enqueue(int x){
    if(rear==size-1){
        cout<<"queue is full\n";
    }
    else{
    p[++rear]=x;
    
}
}

int queue ::dequeue(){
    if(first==rear){
        cout<<"queue is empty"<<endl;
    }
    else{
    int x;
    x=p[++first];
return x;
}
}

void queue:: display(){
    if(first==rear){
        cout<<"queue is empty\n";
    }
    else{
    while(first!=rear){
        first++;
        cout<<p[first]<<" ";
    }

    }
}

int queue:: isfull(){
    int x=0;
    if(rear==size-1){
        x=1;
    }
    return x;
}

int queue:: isempty(){
    int x=1;
    if(rear!=first){
        x=0;
    }
    return x;


}

int main(){
queue q(5);
for(int i=0;i<5;i++){
    cout<<"enter "<<i+1<<" value"<<endl;
    int x;
    cin>>x;
    q.enqueue(x);
}
cout<<endl<<q.isempty();


return 0;
}