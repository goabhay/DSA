#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*pre;
    node*next;
};

class Dlinkedlist{
    private:
    node* head;
    public:
    Dlinkedlist(int arr[],int n){
        head=new node;
        head->data=arr[0];
        head->pre=0;
        head->next=0;
        node *l;
        node *t;
        l=head;

        for(int i=1;i<n;i++){
            t = new node;
            t->pre=l;
            t->data=arr[i];
            l->next=t;
            t->next=0;
            l=t;
    }

    }

    void display();
    void del(int pos);
    void reverse();
    void merge();
    void insert(int pos,int x);
};

//                  class function definition

void Dlinkedlist::display(){
    node*p=head;
    while(p){
        cout<<p->data<<"->";
        p=p->next;
    }
}

void Dlinkedlist:: del(int pos){

    node* p;int x;
    p=head;
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }

    if(p->pre){
        p->pre->next=p->next;
        x=p->data;
        cout<<x<<endl;
    
    if(p->next){
        p->next=p->pre;
       // delete p;
    }
    else{
        //delete p;
    }
}
else{
    x=p->data;
    cout<<x<<endl;
    head=head->next;
    head->pre=0;
   // delete p;
}
}

void Dlinkedlist:: insert(int pos,int x){
    node*t;
    t->data=x;
    t->next=0;
    t->pre=0;
    
    node*p=head;
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    if(p->pre){
        p->pre=t;
        t->pre=p;
        if(p->next->next){
        t->next=p->next;
    }
    }
    else{
        t->next=p;
        p->pre=t;
    }

}

int main(){
    int arr[]={1,2,3,4,5};
    int arr1[]={6,7,8,9,10};
    int n=5;
    Dlinkedlist q(arr,n);
   //q.display();

q.del(1);
   q.display();





   

}