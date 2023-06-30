// not a c++ class but just all the operation on linked list

#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

node* head;
void create(int arr[],int n){

head=new node;
head->data=arr[0];
head->next=nullptr;
node* temp;
node* last;
last=head;
for(int i=1;i<n;i++){
    temp=new node;
    temp->data=arr[i];
    temp->next=0;
    last->next=temp;
    last=temp;
}
}

void display(node*p){
    while(p!=0){
        cout<<p->data<<"->";
        p=p->next;
    }
}

int sum(node*p){
    int sum=0;
    while(p!=0){
        sum+=p->data;
        p=p->next;
    }
}

int del(node*p,int pos){
    int x;
    node*a,*q;
     a=p;
     q=0;
    for(int i=0;i<pos-1;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    delete p;
    return x;
}

void reverse(node *p){
    node*r,*q,*c;               // reversing using sliding pointer
    r=p;
    q=0;
    c=0;
    while(r!=0){
        c=q;
        q=r;
        r=r->next;
        q->next=c;
    }
    head=q;
}


int count(node*p){
    node*k=p;
    int c=0;
    while(k){
        c++;
        k=k->next;
    }
    return c;
}

void rev_recr(node*p,node*q){
 if(p!=0){
    rev_recr(p->next,p);
    p->next=q;
 }
 else{
    head=q;
 }
}

void insert(node*p,int index,int x){        // inserting at any position
    for(int i=0;i<index-1;i++){
        p=p->next;
}
    node*t=new node;
    t->data=x;

    t->next=p->next;
    p->next=t;
}

void merge(node*p,node*q){   // merging two sorted array
    node*f,*l;
    if(p->data>q->data){
            f=l=q;
        q=q->next;
        }
        else{
            f=l=p;
            p=p->next;
        }

    while(p && q){
        
        if(p->data>q->data){
            l->next=q;
            l=q;
            q=q->next;
            l->next=0;
        }
        else{
            l->next=p;
            l=p;
            p=p->next;
            l->next=0;
        }

    }

    while(p||q){
        if(p){
            l->next=p;
            l=p;
            p=p->next;
            l->next;
        }
        else{
            l->next=q;
            l=q;
            q=q->next;
            l->next=0;
        }
    }

    display(f);

}

int issorted(node*p){           // checking sorted
int x;
node*q=p->next;
    while(p->next){
        if(p->data > q->data){
            x=0;
            break;
        }

        p=p->next;
        q=q->next;
        x=1;
    }
    return x;
}

int linsearch(node*p,int key){   // linear search
    int x=0;
    while(p){
        if(p->data==key){
            x=1;
        }
       p =p->next;
    }
    return x;
}

void insertR(node*p,int x){     // insertinf in begining
    node*t;
    t=new node;
    t->data=x;
    t->next=p;
    head=t;
}

void insertL(node*p ,int x){   // inserting in last
    node* t;
    t=new node;
    while(p->next){
        p=p->next;
    }
    p->next=t;
    t->data=x;
    t->next=0;
}

int max(node*p){        // finding the max in linked list
    int x=p->data;
    while(p->next){
        if(p->next->data>x){
            x=p->next->data;
        }
        else
        p=p->next;
    }
    return x;
}

void isloop(node*p){
    node*a,*b;int flag=1;
    a=b=p;
    while(a->next && b->next){
        a=a->next;
        b=b->next;
        if(b->next){
            b=b->next;
        }
        if(a==b){
            cout<<"loop is present\n";
            flag=0;
            break;
        }
    }
    if(flag)
    cout<<"loop is not present";

}


int main(){
    int arr[]={1,4,6,8,10,12,14,18,20};
    create(arr,9);
    node*p,*q;
    p=q=head;
    // while(p->next){
    //     p=p->next;
    // }
    // q=q->next->next;
    // p->next=q;
    isloop(p);
    return 0;
}