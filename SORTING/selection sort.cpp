#include<iostream>
using namespace std;

void swap( int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

void selsort(int a[], int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])
            min=j;
        }
        swap(&a[i],&a[min]);
    }
    return;
}

int main(){
    int a[20],n;
    cin>>n;
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    selsort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}

// TIME COMPLEXITY : O(n^2)