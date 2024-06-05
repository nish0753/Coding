#include<iostream>
using namespace std;
int partition(int arr[], int s, int e ){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1; i <=e; i++){
        if(arr[i]<pivot)
        cnt++;
    }
    //place pivot at right place
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex], arr[s]);
    //sort left and right part
    int i=s,j=e;
    while(i < pivotIndex && j> pivotIndex ){

    while (arr[i]<=pivot)
    {
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i < pivotIndex && j> pivotIndex )
    swap(arr[i++],arr[j--]);
    
    }
    return pivotIndex;   
}

void quicksort(int arr[], int s, int e){
    //base case 
    if(s >= e)
    return;
    //partitioning the array
    int p =partition(arr,s,e);
    quicksort(arr, s, p-1);
    quicksort(arr,p+1, e);
}

int main(){
    int arr[9]={10,16,8,12,15,6,3,9,5};
    int n=9;
    quicksort(arr,0,n-1);
    for(int i=0; i<n; i++){

    
    cout<< arr[i] <<" ";
    }
    return 0;

}