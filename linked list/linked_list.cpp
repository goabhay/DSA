#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};
 
int main() {
 
    int A[] = {3, 5, 7, 10, 15};
 
    Node* head = new Node; // creation in heap (node class)
 
    Node* temp;
    Node* last;

    head->data = A[0];
    head->next = nullptr;
    last = head;
 
    // Create a Linked List
    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
 
        // Create a temporary Node
        temp = new Node;
 
        // Populate temporary Node
        temp->data = A[i];
        temp->next = nullptr;
 
        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }
 
    // Display Linked List
    Node* p = head;
 
    while (p != nullptr){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
 
    return 0;
}

function for creating and displaying the linked list
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
    
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }

}

int main(){
    int ar[]={1,2,3,4,5};
    create(ar,5);
    display(head);
    return 0;
}

 displaying the linked list recursively
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
    int ar[]={1,2,3,4,5};
    create(ar,5);
    node*p=head;
    display(p);
    return 0;
}

printing the reverse of the linked list
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
        display(p->next);
        cout<<p->data<<"-> ";
    }

}

int main(){
    int ar[]={1,2,3,4,5};
    create(ar,5);
    node*p=head;
    display(p);
    return 0;
}

counting the number of nodes  and sum of all elements of linked list
#include<iostream>

using namespace std;
class node{    // creating the node
    public:
    int data;
    node*next;
};
int c=0;;
int sum=0;

node* head;
void create(int arr[],int n){   // creating a linked list
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

void display(node *p){     // displaying the elements of linked list
    
    if(p!=NULL){
        display(p->next);
        cout<<p->data<<"-> ";
    
    }
}
void count(node *q){        // counting the total no. of nodes
    while(q!=NULL){
        c++;
        q=q->next;
        
         }
    cout<<"no. of nodes ="<<c; 
}

void summation(node *a){    // function to find the sum of all element
    while(a!=0){
        sum+=a->data;
        a=a->next;
    }
    cout<<" sum = "<<sum;
}


int main(){
    int ar[]={1,2,3,4,5};
    create(ar,5);
    node*p=head;
  display(p);
    count(p);
    summation(p);
  

    return 0;
}

finding the maximum element from linked list
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
node *head;
int max1;

void create(int arr[],int n){
    head=new node;
    head->data=arr[0];
    head->next=nullptr;
    node* temp;
    node* last;
    last =head;

    for(int i=0;i<n;i++){
        temp=new node;
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
}

    void max(node *p1){
        p1=head;
         max1=head->data;
        while(p1!=NULL){
            if(p1->data > max1){
                max1=p1->data;
            
            }
            p1=p1->next;
            
        }
        cout<<"maximum element is="<<max1;
    }

    int main(){
        int arr[]={10,56,4,2,3,9};
        create(arr,6);
        node *p=head;
        
        max(p);
        return 0;
    }

searching in linked list

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node *head;

void create(int arr[],int n){
    head=new node;
    head->data=arr[0];
    head->next=nullptr;
    node* temp;
    node* last;
    last =head;

    for(int i=1;i<n;i++){
        temp=new node;
    
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
}


int main(){
    int arr[]={50,3,9,4,25,8,64};
    int e=900;
    int c=0;
    create(arr,7);
    node* p=head;
    
    

    while(p!=NULL){
        if(e==p->data){
            cout<<"element found\n";
            break;
        }
        else{
            c++;
        }
        p=p->next;
    }

    if(c==7){
        cout<<"not found"<<endl;
    }

    return 0;
}

// modification in linear search by move to front operation
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
node *head;

void create(int arr[],int n){
    head=new node;
    head->data=arr[0];
    head->next=nullptr;
    node* temp;
    node* last;
    last =head;

    for(int i=1;i<n;i++){
        temp=new node;
    
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
}

int main(){
    int a[]={10,2,56,9,4};
    create(a,5);
    node *p=head;
    int key =9;
    node*q;
    while(p!=NULL){
      
        if(p->data==key){
            
            q=p->next;
            p->next=head;
            head=p;
            break;
        }
        
       q=p;
      
        p=p->next;
    
    }
    cout<<p->data;

    return 0;
}

iserting the element before the first node


#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
node *head;

void create(int arr[],int n){
    head=new node;
    head->data=arr[0];
    head->next=nullptr;
    node* temp;
    node* last;
    last =head;

    for(int i=1;i<n;i++){
        temp=new node;
    
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
}

int main(){
    int a[]={10,2,56,9,4};
    create(a,5);
    
    node* k=new node;
    k->data=100;
    k->next=head;
    head=k;

    cout<<k->data;
    return 0;
}

// inserting the element at any position in linked list
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
node *head;

void create(int arr[],int n){
    head=new node;
    head->data=arr[0];
    head->next=nullptr;
    node* temp;
    node* last;
    last =head;

    for(int i=1;i<n;i++){
        temp=new node;
    
        temp->data=arr[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }
}
void display(node* a){
    a=head;
    while(a!=0){
        cout<<a->data<<" ";
        a=a->next;
    }

}

// main function

int main(){
    int a[]={10,2,56,9,4};
    create(a,5);
    
    node* k=new node;
    k->data=100;
    node* p=head;
    int pos=3;
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }

    k->next=p->next; 
    p->next=k;
    display(k);
    

    
    return 0;
}


