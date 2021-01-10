#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void insert_beginning(Node **ptr_to_head, int data){
    Node *temp = new Node();
    temp->next=*ptr_to_head;
    temp->data=data;
    *ptr_to_head=temp;

}

void insert_end(Node *temp2, int data){
    Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
    

}

void insert_position(Node **temp2, int data, int pos){
    Node *temp=new Node();
    temp->data=data;
    if(pos==1){
        temp->next=*temp2;
        *temp2=temp;
        return;

    }
    Node *t3=*temp2;
    int i=0;
    while(i<pos-2 && t3->next!=NULL){
        t3=t3->next;
    }
    temp->next=t3->next;
    t3->next=temp;
    
}

void display(Node *temp){

     while(temp->next!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<temp->data<<"\n";

}

void remove(Node **head, int pos){
    if(pos==1){
        Node *temp=*head;
        *head=(*head)->next;
        delete temp;
        return;
    }
    Node *temp=*head;
    pos-=2;
    while(pos>0 && temp->next->next!=NULL){
        temp=temp->next;
        pos--;
    }
    Node *temp2=temp->next;
    temp->next=temp2->next;
    delete temp2;

}

int main(){
    Node *head=NULL;
    int x=1,data,pos;
    while(x<6){
    cout<<"\n1.INSERT BEGINNING \n2.INSERT END \n3.INSERT ith position \n4.Print LL \n5.DELETE NODE";
    cin>>x;
    switch (x)
    {
    case 1: cin>>data; insert_beginning(&head,data);//POINTER TO POINTER
            break;
    
    case 2: cin>>data; insert_end(head,data);//PASS BY VALUE
            break;

    case 3: cin>>data>>pos; insert_position(&head,data,pos);//POINTER TO POINTER
            break;
    case 4: display(head);
            break;
    case 5: cin>>pos; remove(&head,pos); break;
    
    
    }
    
    }
    return 0;

}