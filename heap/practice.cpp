#include<iostream>
using namespace std;

class node{
    public:
    node*next;
    int data;
};
node* head;

void create(int arr[],int n){
    head=new node;
    head->data=arr[0];
    head->next=nullptr;
    node* t,* l;
    l=head;

    for(int i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=0;
        l->next=t;
        l=t;
    }
}

void display(node*p){
    
    while(p){
        cout<<p->data<<"->";
        p=p->next;

    }

}
node*q=0;
void reverse_recur(node *p,node*q){
    if(p!=0){
        reverse_recur(p->next,p);
        p->next=q;
    }

    else{
        head=q;
    }
}

void del(int pos){
    node*p=head;
    
    
    for(int i=1;i<=pos-1;i++){
        q=p;
        p=p->next;
    }
    
    q->next=p->next;
    cout<<p->data<<endl;
    delete p;
}

void insert(int pos,int val){
    node*p=head,*q=0;
    for(int i=0;i<pos-1;i++){
        q=p;
        p=p->next;
    }

    node *temp;
    temp=new node;
    temp->data=val;
    temp->next=p;
    q->next=temp;
}

void Rinsert(int x){
    node* temp=new node;
    temp->data=x;
    temp->next=head;
    head=temp;
}

void append(int val){
    node*p,*temp;
    p=head;
    while(p->next!=0){
        p=p->next;
    }
    temp=new node;
    temp->data=val;
    temp->next=nullptr;
    p->next=temp;
}

void sum(node*p){
    
    int s=0;
    while(p){
        s+=p->data;
        p=p->next;
    }
    cout<<s;
}
void reverse(node*p){
    node*q,*r;
    q=r=0;
    while(p){
        q=p;
        p=p->next;
        q->next=r;
        r=q;
    }
    head=q;

}

int issorted(node*p){
    int flag=1;
    if(p->next->data > p->data){
        while(p->next!=0){
            if(p->next->data < p->data){
                flag=0;
                break;
            }
            p=p->next;
        }
        return flag;
    }

    else if(p->next->data < p->data){
        flag=1;
        while(p->next!=0){
            if(p->next->data > p->data){
                flag=0;
                break;
            }
            p=p->next;
        }
        return flag;
    }
}

void merge(node*p,node*q){
    node*t;
    while(p->next){
        p=p->next;
    }
    p->next=q;
    

}

int lsearch(node*p,int key){
    
    int x=0;
    while(p!=0){
        if(p->data==key){
        x=1;
        }
        p=p->next;
        
    }
    return x;
}

int len(node*p){
    int count =0;
    while(p){
        p=p->next;
        count++;
    }
    return count;
}

int isloop(node*p){
    node*a,*b;
    a=b=p;
    int x=0;
    while(a->next&&b->next){
        a=a->next;
        b=b->next;
      
        if(b->next){
            
            b=b->next;
        }
        if(a->data==b->data){
            x=1;
        }
    }
    return x;
}

void merge_sorted(node*p,node*q){
    node*f,*l;

  if(p->data>q->data){
    f=l=q;
    q=q->next;
  }
  else{
    f=l=p;
    p=p->next;
  }

  while( p && q){
    if(p->data > q->data){
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
while(p|| q){
    if(p){
        l->next=p;
        l=p;
       p= p->next;
       l->next=0;
    }
    else{
        l->next=q;
        l=q;
        q=q->next;
        l->next=0;
    }
}






}
   


int main(){
    int arr[]={1,2,30,4,5};
    int a[]={6,7,8,9,10,11,12};
    create(arr,5);
    node*p=head;
    create(a,7);
    node*q=head;
merge_sorted(p,q);
display(p);




    
}