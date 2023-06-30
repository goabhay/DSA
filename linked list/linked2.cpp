// inserting the elements in sorted linked list

// #include<iostream>

// using namespace std;
// class node{    // creating the node
//     public:
//     int data;
//     node*next;
// };
// node* head;
// int c=0;;
// int sum=0;


// void create(int arr[],int n){   // creating a linked list
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

// void display(node *p){     // displaying the elements of linked list
    
//     if(p!=NULL){
       
//         cout<<p->data<<"-> ";
//          display(p->next);
    
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,10,45};
//     int e=15;
//     create(arr,6);
//     node* p=head;
//     node*q=nullptr;
//     while (p && p->data<e)
//     {
//         q=p;  // important:must come before the p=p->next statement
//         p=p->next;
        
//     }
//     node* k=new node;
//     k->data=e;
//     k->next=q->next;
//     q->next=k;

// node* m=head;
//     display(m);
    
//     return 0;
    
// }

// deleting the element from the linked list...........

// #include<iostream>

// using namespace std;
// class node{    // creating the node
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
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int pos=5;
//     create(arr,10);
//     node*p=head;
//     node*q=nullptr;
//     for(int i=0;i<pos-1;i++){
//         q=p;
//         p=p->next;
//     }
//     q->next=p->next;
//     p->next=nullptr;

//     node*k=head;
//     display(k);
//     return 0;

// }

//deleting the node of first position
//  #include<iostream>

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
//     int arr[]={1,2,3,4,5,6};
//     create(arr,5);
//     node*p=head;
//     head=head->next;  
//     delete p;         // along with deleting , deallocating the node from heap
    
     
//     display(head);
//     return 0;

// }

// finding whether the given linked list is sorted or not
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
//     int arr[]={1,20,3,4,5};
//     create(arr,5);
//     node* p=head;
//     node*q=head->next;
//     int count;
//     while(q!=0){
        
//         if(q->data<p->data){
//             cout<<" not sorted";
//             count=1;
//             break;
//         }
//         p=p->next;
//         q=q->next;
        
//     }
    
//     if(count!=1){
//         cout<<"sorted";
//     }
// return 0;
// }

// deleting the duplicate elements from the linked list
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
//     int arr[]={1,1,2,2,2,2,3,3};
//     create(arr,8);
//     node*p=head;
    
//     node*q=p->next;

//     while(q!=0){
        
//         if(p->data!=q->data){
//             p=q;
//             q=q->next;
//         }
        
//         else{
//        p->next=q->next;
//        delete q;
//        q=p->next;
//     }
//     }

//     display(head);
//     return 0;
// }

// reversing the linked list  *using the auxilary array

#include<iostream>

using namespace std;
class node{    
    public:
    int data;
    node*next;
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
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
}

void display(node *p){     
    
    if(p!=NULL){
       
        cout<<p->data<<"-> ";
         display(p->next);
    
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    create(arr,8);
    node *p=head;
    int a[8];
    int i=0;
    for(;i<8;i++){
        a[i]=p->data;
        p=p->next;
    }
    i--;
    p=head;     // again bringing back the pointer to head;
    for(;i>=0;i--){
        p->data=a[i];
        p=p->next;
    }

    node* j=head;
    display(j);

    return 0;
}

// reversing the linked list *using sliding pointer method
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
//     node* p;
//     node*q;
//     node*r;
//     int arr[]={1,5,6,98,7};
//     create(arr,5);
//     p=head;
//     q=nullptr;
//     r=nullptr;
//     while(p){
//         r=q;
//         q=p;
//         p=p->next;
//         q->next=r;
// }

//     head=q;
//     display(head);
//     return 0;
// }

// reversing the linked list  ****recursively
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

// void reverse(node *p,node*q){
//     if(p!=0){
//         reverse(p->next,p);
//         p->next=q;
//         //cout<<p->data<<" "; // if want to print through the reverse function
//     }
//     else{
//         head=q;
//     } 

// }

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     create(arr,6);
//     node*p=head;
//     node*q=nullptr;
//     reverse(p,q);
//     display(head);
//     return 0;
// }


// concatination of two linked list
// #include<iostream>

// using namespace std;
// class node{    
//     public:
//     int data;
//     node*next;
// };
// node* head; node*second=0;node*third=0;

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
// void concatinate(node *p,node*q){
//     node* k=p;
//     while(p!=0){
//         p=p->next;
//     }
//     p->next=q;
//     display(k);
// }

// int main(){
//     int a1[]={1,2,30,4,5};
//     int a2[]={6,7,8,9,10};
//     node*p;node*q;node*k;  // create three pointers

//    create(a1,5);   // creation of 1st linked list
//    p=k=head;    
//    create(a2,5);    // 2nd linked list
//    q=head;
   
// while (p->next!=0)
// {
//     p=p->next;
// }

//    p->next=q;
//    display(k);
    
//     return 0;
// }


// merging  two linked list
// #include<iostream>
// using namespace std;
// class node{    
//     public:
//     int data;
//     node*next;
// };
// node* head; node*second=0;node*third=0;

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
//     int a1[]={1,5,9,18,20,30,40,50,60};
//     int a2[]={2,4,6,10,12};
//     node*t;node*k;
//     node*l;
//     node*p;node*q;
//     create(a1,9);
//     p=k=head;
//     create(a2,5);
//     q=head;

//     if(p->data > q->data){
//         l=t=q;
//         q=q->next;
//         l->next=0;
//     }
//     else{
//         l=t=p;
//         p=p->next;
//         l->next=0;
//     }

//     while(p && q){
//         if(p->data >q->data){
//             l->next=q;
//             l=q;
//             q=q->next;
//             l->next=0;
//         }
//         else{
//             l->next=p;
//             l=p;
//             p=p->next;
//             l->next=0;
//         }
//     }

//     cout<<p->data<<endl;
//     while(p||q){
//         if(p!=0){
//         l->next=p;
//         l=p;
        
//         p=p->next;
//         l->next=0;
//     }
//     else{
//         l->next=q;
//         l=q;
//         q=q->next;
//         l->next=0;
//     }
//     }
   
//   //  cout<<p->data;
//     display(k);
//     return 0;
// }


// checking for loop in linked list**************

// #include<iostream>
// using namespace std;
//  class node{
//     public:
//     int data;
//     node* next;
//  };
//  node*head;
//                                      // making a circular linked list
//   void create(int arr[],int n){
//     head=new node;
//     head->data=arr[0];
//     head->next=0;
//     node*temp;
//     node*last;
//     last=head;
//     for(int i=0;i<n;i++){
//         temp=new node;
//         temp->data=arr[i];
//         temp->next=0;
//         last->next=temp;
//         last=temp;
//     }
//     last->next=head;
//   }

// void display(node *p){     
    
//     if(p!=NULL){
       
//         cout<<p->data<<"-> ";
//          display(p->next);
    
//     }
// }

// int main(){
//     int arr[]={12,2,3,4,5};
//     create(arr,5);
//     node*p=head;
//     for(int i=0;i<=5;i++){    // loop has been run one more time to point at first element(circular linked list)
//         p=p->next;
//     }   
//     node*m;node*n;
//     m=n=head;
//  do{                                         
        

//     m=m->next;
//     n=n->next;
//     if(n->next!=0){
//         n=n->next;
    
   
//        if(m==n){
//         cout<<"loop is present";
//         break;
//     }
//  }
//  else{
//     cout<<"linear linked list";
//     break;
//  }
//  }while(1);
//     return 0;
// }

//or for checking the loop in list we can use
// do{
//     m=m->next;
//     n=n->next;
//    n= (n->next!=0)?n->next:n;
// }while(m && n && m==n);

// also m=m->next->next->next // syntax is correct

