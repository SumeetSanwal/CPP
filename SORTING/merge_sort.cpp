#include<iostream>
using namespace std;

void merge(int a[],int l,int m, int r){
    int i=l,j=m+1,k=0;
    int b[r-l+1];
    while(i<=m && j<=r){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }    
        while(j<=r){
            b[k]=a[j];
            j++;
            k++;
        }
    
        while(i<=m){
            b[k]=a[i];
            i++;
            k++;
        }

    for(i=l,k=0;i<=r;i++,k++)
        a[i]=b[k];


}

void mergesort(int a[],int l,int r){
   if(l>=r)
   return ;
   int m=(l+r)/2;
   mergesort(a,l,m);
   mergesort(a,m+1,r);
   merge(a,l,m,r);

}

int main(){
    int a[20],n;
    cin>>n;
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}