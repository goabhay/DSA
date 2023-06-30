// circular linked list

// #include<iostream>

// using namespace std;
// class node{    
//     public:
//     int data;
//     node*next;
// };
// node* head;



// void create(int arr[],int n){   
//     head=new node;
//     head->data=arr[0];
//     head->next=nullptr;
//     node* temp;
//     node* last;
//     last=head;
//     for(int i=1;i<n;i++){
//         temp=new node;
//         temp->data=arr[i];
//         temp->next=nullptr;
//         last->next=temp;
//         last=temp;
//     }
// }

// void display(node *p){     
    
//     if(p!=NULL){
       
//         cout<<p->data<<"-> ";
//          display(p->next);
    
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
    
//     create(arr,7);
  
//     node*p;
//     node*k;
//     p=k=head;
//    while(k->next!=0){
//     k=k->next;
//    }
//   p=p->next->next->next;   // loop b/w 4th and last element
//   k->next=p;

// cout<<k->data;
//     return 0;
// }


// inserting the elements in circular linked list
// #include<iostream>

// using namespace std;
// class node{    
//     public:
//     int data;
//     node*next;
// };
// node* head;



// void create(int arr[],int n){   
//     head=new node;
//     head->data=arr[0];
//     head->next=nullptr;
//     node* temp;
//     node* last;
//     last=head;
//     for(int i=1;i<n;i++){
//         temp=new node;
//         temp->data=arr[i];
//         temp->next=nullptr;
//         last->next=temp;
//         last=temp;
//     }
// }

// void display(node *p){     
    
//     if(p!=NULL){
       
//         cout<<p->data<<"-> ";
//          display(p->next);
    
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     create(arr,5);
//     node*p;node*k;node*q;
//     p=q=head;
//     while (q->next!=0)
//     {
//         q=q->next;
//     }
//     q->next=head;


//     // inserting an element at first position
//     node* t=new node;
//     t->data=55;
//     t->next=0;
//     while(p->next!=head){
//         p=p->next;
//     }
//     p->next=t;
//     t->next=head; 

// // displaying the circular linked list
// head=t;
// k=head;
// while(k->next!=head){
//     cout<<k->data<<" ";
//     k=k->next;
// }
// /*
// recursively displaying the elements of circular linked list
// void display(node*p){

// int flag=0;
// if(p!=head || flag==0){
//     flag=1;
//     p=p->next;
//     display(p);
// }

// }
// */

    
// return 0;
// }


// doubly linked list...................................
#include<iostream>
using namespace std;

// creating the node class

class node{
    public:
    int data;
    node* next;
    node* pre;
};
node*head;

// create a doubly linked list
void create(int arr[],int n){
    head =new node;
    head->pre=0;
    head->next=0;
    head->data=arr[0];
    node*t;
    node*l;
    l=head;
    for(int i=1;i<n;i++){
        t = new node;
        t->data=arr[i];
        t->next=l->next;
        t->pre=l;
        l->next=t;
        l=t;
    }
}
// display function
    void display(node*p){
    
        while(p!=0){
            cout<<p->data<<" ";
            p=p->next;
        }
    }

// count the no. of nodes of doubly linked list
    void count(node*k){
        int c=0;
        while(k!=0){
            c++;
            k=k->next;
        }
        cout<<c;
    }

    // insert function 
void insert(node*p,int n,int num){  
    for(int i=0;i<n-1;i++){
        p=p->next;
    }
                            // declaring a new node
    node* a=new node;
    a->data=num;
    a->next=0;
    a->pre=0;
    
    if(p->pre!=0){          //checking if it is first node
    a->pre=p;
    if(p->next!=0){         // checking if it is last node
    a->next=p->next;
    p->next->pre=a;
    p->next=a;
    }
    else{
        a->next=0;
        p->next=a;      // insertion condition for last node
    }
}
    else{
        a->next=p;
        p->pre=a;       // insertion condition for first node
        a->pre=0;
        head=a;
    }
    
}

// delete function

void del(node*p,int n){

     if( n < 1 || n>9){
        cout<<"not possible\n";
    }
   
    cout<<p->data<<endl;
    if(n==1){
        head=head->next;
        if(head->pre){
            head->pre=0;
        }
        delete p;
    }
   else{
    for(int i=0;i<n-1;i++){
        p=p->next;
    }
    p->pre->next=p->next;
    if(p->next){
        p->next->pre=p->pre;
    }
    delete p;
   }
    
}

void reverse(node*p){
    node*temp;
    while(p!=NULL){
    
    temp=p->next;
    p->next=p->pre;
    p->pre=temp;
    p=p->pre;
    if(p!=0 && p->next==NULL){
        head=p;
    }
    }  
}
    int main(){
        int arr[]={1,2,3,4,5,6,7,8,9};
        create(arr,9);
        node*p=head;
        display(head);
        cout<<endl;
        reverse(p);
        display(head);
        
        return 0;
    }
