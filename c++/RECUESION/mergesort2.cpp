#include<iostream>
using namespace std;

void merge(int *arr , int s,  int e){
    int mid=(s+e)/2;
    //array ka length define krna hai
    int len1=mid-s+1;
    int len2=e-mid;
    //create 2 array
    int *first =new int[len1];
    int *second =new int[len2];

    //copy the value of the above array 
    int k=s;
    //k=main array index
    for(int i=0; i<len1; i++){
        first[i]=arr[k++];
    }
     k=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[k++];
    }
    //merge 2 sorted array 
    int index1=0;
    int index2=0;
    k=s;
    while(index1 < len1 & index2 <len2){
        if(first [index1] < second [index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
        while(index1 < len1){
            arr[k++]=first [index1++];
        }
        while(index2 < len2){
            arr[k++]= second[index2++];
        }
    }


}

void mergesort(int *arr,int s,  int e){
    //base case 
    if(s>=e)
     return;
     int mid=(s+e)/2;
     //left part ko sort krna hai
     mergesort(arr,s,mid);

     //right part ko sort krna hai
     mergesort(arr, mid+1,e);
     //merge two sorted array

     merge(arr, s,e);

}

int main(){

int arr[7]={4,6,9,3,1,23,24};
int size=7;
mergesort(arr ,0, size-1);
for(int i=0; i<=size; i++){
    cout<< arr[i] <<" ";
    cout<< endl;
    
}

}