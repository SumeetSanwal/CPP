#include<iostream>
using namespace std;

#define max 1000

class stack {
    int A[max];
    int top;;
    
    public :

    stack(){top=-1;}

    void push(int x){
        if(top==max-1)
        {
            cout<<"OVERFLOW\n";
            return;
        }
        A[++top]=x;

    }

    int pop(){
        if(top==-1){
            cout<<"UNDERFLOW\n";
            return 0;
        }

        return A[top--];

    }

    int peek(){
        if(top==-1){
            cout<<"EMPTY\n";
            return 0;
        }
        return A[top];

    }

    bool isEmpty(){    
    return (top<0);
    }

};

int main(){

    stack s;
    s.push(5);
    s.push(10);
    cout<<s.peek();
    cout<<"\n"<<s.isEmpty();
    cout<<"\n"<<s.pop();


    return 0;
}
