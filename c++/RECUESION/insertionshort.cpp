#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    //base case
    if(n==0 || n==1)
    return;

    //ek case solve krna hai
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    InsertionSort(arr ,n-1);
}

int main(){

int arr[5]={12,11,13,5,6};
InsertionSort(arr, 5);
for(int i=0;i<5; i++){
    cout<< arr[i]<< endl;
}
return 0;

}
