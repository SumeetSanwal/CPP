#include<iostream>
using namespace std;

void insertion(int a[], int n){
    int temp,j;
    for(int i=1;i<n;i++){
        j=i-1;
        temp=a[i];
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

}

int main(){
    int a[20],n;
    cin>>n;
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    insertion(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}