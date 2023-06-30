// stack using array of address
#include<iostream>
using namespace std;

class stack{

    // class attributes
    private:
    int top;
    int **p;
    int size;

    public:
    stack(int size){
        this->size=size;
        top=-1;
        p=new int*[size]; 
    }

    // class member function
    void push(int* x);
    int* pop();
    int isEmpty();
    int isFull();
    int* peek();
    void display();
};

void stack::push(int* x){
    if(top==size-1){
        cout<<"stack overflow\n";
    }
    else{
        p[++top]=x;
    }
}

int* stack:: pop(){
    int* x;
    if(top==-1){
        cout<<"stack is empty\n";
    }
    else{
    x=p[top--];
    }
    return x;
}

int* stack :: peek(){
    int* x;
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

