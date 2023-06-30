#include<iostream>
using namespace std;

class node{                                             // node class
    public:
    int data;
    node*rchild,*lchild;
};

class tree{                                                   // tree class
    public:
    node* root;

    void create();
    void preorder();
    void inorder();
    void postorder();
    void iter_preorder(node*p);
    void iter_post(node*p);


};

class queue{                // queue class
    private:
    node**p;
    int f,r;
    int size;

    public:
    queue(int size){
        this->size=size;
        f=r=-1;
        p=new node*[size];
    }

    void enqueue(node*p);
    node* dequeue();
    int isempty();
};

void queue::enqueue(node*q){                        //enqueue function
    if(r==size-1){
        cout<<"queue is full"<<endl;
    }
    else{
        p[++r]=q;
    }
}

node* queue::dequeue(){                                 // dequeue function
    node*q;
    if(r==f){
        cout<<"queue is empty"<<endl;
    }
    else{
        q=p[++f];
        
    }
    return q;
}

int queue::isempty(){                               // isempty
    int x=0;
    if(r==f){
        x=1;
    }

    return x;
}
                     // stack class
class stack{
    public:
    node **p;
    int top;
    int size;

    stack(int size){
        this->size=size;
        top=-1;
        p=new node*[size];
    }
        void push(node* p);
        node* pop();
        node* peek();
        int isempty();
   
};

 void  stack::push(node* x){                                      //push
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            p[++top]=x;
        }
    }

    node* stack::pop(){                                       //pop
        node* x;
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{
            x=p[top--];
        }
        return x;
    }

int stack::isempty(){                                   
    int x=0;
    if(top =-1){
        x=1;
    }

    return x;
}

node* stack::peek(){            // peek function
    node*x;
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        x=p[top];
    }

    return x;
}


void tree::create(){                                         // create tree

    node*t,*l=nullptr;
    root=new node;
    root->rchild=root->lchild=0;
    int x;
    cout<<"enter the value for root\n ";
    cin>>x;
    root->data=x;

    queue q(50);
    q.enqueue(root);

    while(!q.isempty()){
        l=q.dequeue();
        cout<<"enter the left child value of "<<l->data<<" ";
        cin>>x;
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=t->rchild=0;
            q.enqueue(t);
            l->lchild=t;
        }
        
            cout<<"enter the rchild "<<l->data<<" ";
            cin>>x;
            if(x!=-1){
                t=new node;
                t->data=x;
                t->rchild=t->lchild=0;
                q.enqueue(t);
                l->rchild=t;
            }
        
        
    }
}
void preorder(node*p){
    if(p==0){
        return ;
    }
    else{
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(node*p){
    if(p==nullptr){
        return ;
    }

    else{
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);

    }
}

void postorder(node*p){
    if(p==nullptr){
        return ;
    }
    else{
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}

void tree::iter_preorder(node*p){
    stack s(50);
    
    while(!s.isempty() || p!=NULL){
        if(p!=nullptr){
            cout<<p->data<<" ";
            s.push(p);
            p=p->lchild;
        }
        else{
            p=s.pop();
            p=p->rchild;
        }
    }

}

void iter_post(node*p){

    stack s(50);
    while(!s.isempty() || p!=nullptr){
        if(p!=nullptr){
            s.push(p);
            p=p->lchild;
            cout<<1;
        }
        else{
            cout<<2;
            node*temp=s.peek()->rchild;
            if(temp==nullptr){
                temp=s.pop();
                cout<<temp<<" ";
               while(!s.isempty() && temp==s.peek()->rchild){
                temp=s.pop();
                cout<<temp<<" ";
               }
                
            }
            else{
                p=temp;
            }
        }
        
    }
}

int main(){

    tree t;
    t.create();
    node*p = t.root;
    cout<<"preorder"<<endl;
    // preorder(p);
    // cout<<endl<<"postorder"<<endl;
    // postorder(p);
    // cout<<endl<<"inorder"<<endl;
    // inorder(p);
   iter_post(p);    
    
}

