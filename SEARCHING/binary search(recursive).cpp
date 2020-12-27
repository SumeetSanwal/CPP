#include<iostream>
using namespace std;
void bi(int a[],int start,int end, int key){
    int mid=(start + end)/2;
    if(start<=end){
    if(a[mid]==key){
    cout<<"ELEMENT at INDEX : "<<mid;
    return;}

    else if(a[mid]<key){
       return bi(a,mid+1,end,key);
    }
    else if(a[mid]>key){
       return bi(a,start,end-1,key);
    }
    }
    cout<<"ELEMENT NOT THERE";
    return;

}
int main(){
    int a[20],key,n;
    cin>>n;
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"ENTER KEY : ";
    cin>>key;
    bi(a,0,n,key);
    return 0;
}