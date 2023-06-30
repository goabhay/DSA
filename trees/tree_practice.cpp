#include<iostream>
using namespace std;

class node{
    public:
    node* rchild;
    node* lchild;
    int data;
};   

class tree{
    public:
    node* root;
    
    tree(){
        root=NULL;
    }
    

    void create();
    void inorder(node*p);
};

class stack{
    private:
    int top;
    int size;
    node**s;
    public:

    stack(int size){
        this->size=size;
        top=-1;
        s=new node*[size];
    }

    void push(node*p);
    node* pop();
    int isempty();
};

void stack::push(node*p){
      if(top==size-1){
            cout<<"stack is full\n";
        }
        else{
        s[++top]=p;
    }
}

node* stack::pop(){
    node*x;
    if(top==-1){
        cout<<"stack is full\n";
    }
    else{
        x=s[top--];
    }
}

int stack::isempty(){
    int x=0;
    if(top==-1){
        x=1;
    }
    return x;
}


class queue{
    private:
    node**q;
    int size;
    int front,rear;
    

    public:
    queue(int size){
        this->size=size;
        front=rear=-1;
        q=new node*[size];
    }

    int isEmpty();
    void enqueue(node*p);
    node* dequeue();
};


void queue::enqueue(node*p){
    if(rear==size-1){
        cout<<"queue is full\n";
    }
    else{
        q[++rear]=p;
    }
}

node* queue::dequeue(){
    node*x;
    if(rear==front){
        cout<<"queue is empty\n";
    }
    else{
        x= q[front+1];
        front++;
    }
    return x;
}

int queue::isEmpty(){
    int x=0;
    if(rear==front){
        x=1;
        
    }
    return x;
}

void tree:: create(){
    int x;
    
    queue q(100);
    node*t,*p=nullptr;

        root =new node;
        
        root->rchild=0;
        root->lchild=0;

        cout<<"enter the value of root\n";
        cin>>x;
        root->data=x;
    
    q.enqueue(root);

    while(!q.isEmpty()){
        
        p=q.dequeue();    
        // left child                                              // take out address from queue to 
        cout<<"enter lchild of "<<p->data<<":";                     // prepare new node and save it's address in queue
        cin>>x;

        if(x!=-1){
        t=new node;
        t->data=x;
         q.enqueue(t);   // address of new lchild 
        t->lchild=0;
        t->rchild=0;
        p->lchild=t;
       
        }
        
        // right child
        cout<<"enter the rchild of "<<p->data<<": ";
        cin>>x;
        if(x!=-1){
        t=new node;
        t->data=x;
        q.enqueue(t);     //address of rchild
        t->lchild=t->rchild=0;
        p->rchild=t;
        
    }
    
    }
    
}
// recursive printing
void tree::inorder(node*p){
    if(p==nullptr){
        return;
    }
    else{
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
}
}


// inorder using stack
void preorder_iter(node*p){
    node*k;
    stack s(100);
    
    while(!s.isempty() || p!=0){
        if(p){
            s.push(p);
           
            cout<<p->data<<" ";
             p=p->lchild;
        }
        else{
            p=s.pop();
            p=p->rchild;
        }
   
}
}

int main(){
    node*p;
    tree t;
    
    t.create();
    p=t.root;
    cout<<p->data<<endl;
   t.inorder(p);
    return 0;
    
}












