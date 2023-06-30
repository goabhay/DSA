#include<iostream>
using namespace std;


// *********************************************************node class**************************

class node{
    public:
    
    node *lchild,*rchild;
    int data;
};


// ***********************************************************queue class******************************

class queue{
    private:
      node **q;
      int first,rear;  
      int size;         
public:

queue(int size){

        first=rear=-1;
    this->size=size;
    q = new node*[size];

}
    void enqueue(node *p);
    node*  dequeue();
    int isempty();
    int isfull();

};

void queue::enqueue(node *p){
    if(rear==size-1){
        cout<<"queue is full\n";
    }
    else{
        q[++rear]=p;
    }
}

node*  queue::dequeue(){
    node* x;
    if(rear==first){
        cout<<"queue is empty"<<endl;
    }
    else{
        x = q[first+1];
    first++;
    }
    
    return x;
}

int queue::isempty(){
    int x=0;
    if(rear==first){
        x=1;
    }
    return x;
}

int queue:: isfull(){
    int x=0;
    if(rear==size-1){
        x=1;
    }
    return x;
}

// *************************************************tree class**********************************************

class tree{
    public:
    node* root;
    tree(){
    root=NULL;
    }

    void createtree();
    void postorder(node*p);
    //void preorder(node*p);
    //void iter_preorder(node*p);

    void inorder(node*p);
    void levelorder(node*p);
};

//**************************************************stack class*******************************

class stack{

    // class attributes
    private:
    int top;
    node **p;
    int size;

    public:
    stack(int size){
        this->size=size;
        top=-1;
        p=new node*[size]; 
    }

    // class member function
    void push(node* x);
    node* pop();
    int isEmpty();
    int isFull();
    node* peek();
    void display();
};

void stack::push(node* x){
    if(top==size-1){
        cout<<"stack overflow\n";
    }
    else{
        
        p[++top]=x;
    }
}

node* stack:: pop(){
    node* x;
    if(top==-1){
        cout<<"stack is empty\n";
    }
    else{
    x=p[top--];
    }
    return x;
}

node* stack :: peek(){
    node* x;
    if(top!=-1){
        cout<<"stack is empty\n";
    }
    else{
    x=p[top];
    }
    return x;
}

int stack:: isEmpty(){
    int x=0;
    if(top==-1){
        x=1;
    }
    return x;
}

int stack::isFull(){
    int x=0;
    if(top==size-1){
        x=1;
    }
    return x;
}

void stack :: display(){
    for(int i=top;i>=0;i--){
        cout<<p[top--]<<" ";
        
    }

}




//************************************************************creating the tree**********************
void tree::createtree(){

     // declaring the temporary pointer l,t
    node* t,*l =nullptr;    
     root=new node;

    int x;
    
    queue q(100);
    
    root->rchild=root->lchild=0;
    cout<<"enter the value of root\n";
    cin>>x;
    root->data=x;

   

    q.enqueue(root);

    while(!q.isempty()){
         l = q.dequeue();
        // creating the left child
        cout<<"enter the value of lchild "<<l->data<<endl;
        cin>>x;

        if(x!=-1){          // checking if the node has left child
            t=new node;
            t->data=x;
            q.enqueue(t);       // writing the address of left child
            t->rchild=0;
            t->lchild=0;
            l->lchild=t;
            
        }
            // creating right child

        cout<<"enter the value of rchild "<<l->data<<endl;
        cin>>x;
        if(x!=-1){                  // checking if node has right child
            t= new node;
            t->data=x;
            q.enqueue(t);               // entering the address of right child of node in queue
            t->lchild=t->rchild=0;
            l->rchild=t;
            
        }
        }   // loop closing

        
    }    // end of createtree function
    

    //////////// *************************preorder function**********************
void  preorder(node*p){
    if(p==NULL){
        return ;
    }
    else{
    cout<<p->data<<" ";
    preorder(p->lchild);
    preorder(p->rchild);
}
}

//*********************************** iterative method of printing preorder traversal
void iter_preorder(node*p){
    
    
    stack s1(100);
    
    while(!s1.isEmpty() || p!=NULL ){
        if(p!=NULL){
            cout<<p->data<<" ";
            s1.push(p);
            p=p->lchild;
            
        }
        else{
          p = s1.pop();
          
          p=p->rchild;
        }
    }

}

//************************iterative level traversal*******
void iter_levelorder(node*p){
    queue q(100);
     node*k=p;
     q.enqueue(k);
     cout<<k->data<<" ";

    while(!q.isempty()){
        k=q.dequeue();
        if(k->lchild){
        cout<<k->lchild->data<<" ";
        q.enqueue(k->lchild);
       
        }
        if(p->rchild){
        cout<<k->rchild->data<<" ";
        q.enqueue(k->rchild);
        }
    }
}

int count(node*p){

    int x,y;
    if(p){
        x=count(p->lchild);
        y=count(p->rchild);
        return x+y+1;
    }
    else {
        return 0;
    }
}

int main(){
    tree t;

   t.createtree();
iter_preorder(t.root);

}

