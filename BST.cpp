#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* rchild;
    node* lchild;
};

class queue{
 int front,rear;
 int size;
 node** q;

 public:
 queue(int size){
    this->size=size;
    front=rear=-1;
    q=new node*[size];
 }
 void enqueue(node*p);
 node* dequeue();
 int isempty();
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
        x=q[++front];
    }
    return x;
}

int queue:: isempty(){
    int x=0;
    if(rear==front){
        x=1;
    }
    return x;
}

class BST{
    public:
    node*root;

    BST(){
        root=0;
    }
    void insert(int x);
    void inorder(node*p);
};

void BST::insert(int x){
    node*p,*q,*t;
    t=root;
    if (root==0){
        p=new node;
        p->data=x;
        p->rchild=p->lchild=0;
        root=p;
        return;   // termination of function call

    }
    
    
        while(t!=0){
            q=t;
            if(t->data>x){
                t=t->lchild;
            }
            else if(t->data<x){
                
                t=t->rchild;
            }
            else{
                return;
            }
        }

p=new node;
p->data=x;
p->rchild=p->rchild=0;

        if(q->data>x){
            q->lchild=p;
        }
        else{
           
            q->rchild=p;
        }

}


void BST:: inorder(node*p){
 if(p){
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
}

}



int main(){
    BST t;
    node*p;
 
    int x;
    t.insert(8);t.insert(4);t.insert(9);t.insert(5);t.insert(6);
    
       p=t.root;
  cout<<p->rchild->data;
 //cout<<t.root->lchild->rchild->data;
    return 0;
}



