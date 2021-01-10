/*
Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.
*/

#include<iostream>
using namespace std;

//Time Complexity: O(n^2)
void check(int a[],int n, int key){
    int sum=0;

    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==key)
            {
                cout<<i+1<<" "<<j+1;
                return;
            }
        }
    }

}


// //WRONG APPROACH O(n)
// void check2(int a[],int n,int key){
//     int sum=0,i=0,j,st,en;

//     while(j<n && sum+a[j]<=key){
//         sum+=a[j];
//         j++;
//     }
//     if(sum==key){
//         cout<<i+1<<" "<<j+1;
//         return;
//     }

//     while(j<n){
//         sum+=a[j];
//         while(sum>key){
//             sum-=a[i];
//             i++;
//         }
//         if(sum==key){
//             st=i+1;
//             en=j+1;
//             break;
//         }


//         j++;
//     }
//     cout<<st<<" "<<en;

// }

int main(){

    int a[20],key,n;
    cin>>n;
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"ENTER KEY : ";
    cin>>key;
    check(a,n,key);


    return 0;
}