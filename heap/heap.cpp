#include<iostream>
using namespace std;



void insert(int arr[],int n){
    int temp=arr[n];
    int i=n;
    
    while(i>1 && temp>arr[i/2]){
        arr[i]=arr[i/2];
        i=i/2;
    
    }
    arr[i]=temp;
}

void del(int arr[],int n){
    int i=1,j;
    
    swap(arr[1],arr[n]);  // for heap sort 
    j=2*i;
    while(j<n-1){
        if(arr[j]>arr[j+1] && arr[j]>arr[i]){
            swap(arr[i],arr[j]);
            i=j;
            j=2*i;
        }
        else if(arr[j+1]>arr[j] && arr[i]<arr[j+1]){
            swap(arr[i],arr[j+1]);
            i=j+1;
            j=2*i;
        }
        else{
            break;
        }
    }

}



int main(){
    
int arr[]={0,5,2,3,4,8,9,7};
    for(int i=2;i<=7;i++){
        insert(arr,i);
    }

   
    for(int i=7;i>1;i--){   // deleting and sorting also
        del(arr,i);
    }

    for(int i=1;i<=7;i++){   // printing the sorted heap
        cout<<arr[i]<<" ";
    }
    return 0;

}