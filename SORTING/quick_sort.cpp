#include<iostream>
using namespace std;

void swap( int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int a[], int start, int end){
    int PartionIndex=0;
    for(int i=0;i<end;i++){
        if(a[i]<a[end]){
            swap(a[PartionIndex],a[i]);
            PartionIndex++;
        }
    }
    swap(a[PartionIndex],a[end]);
    return PartionIndex;

}

void quicksort(int a[],int start,int end){
   if(start<end){
   int PartitionIndex = partition(a,start,end);
   quicksort(a,start,PartitionIndex-1);
   quicksort(a,PartitionIndex+1,end);
   }
}

int main(){
    int a[20],n;
    cin>>n;
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}