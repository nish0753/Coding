#include<iostream>
using namespace std;

int secondSmallest(int arr[], int n){
    if (n<2)
    return -1;
    int smallest=INT_MAX;
    int second_smallest=-1;
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
        }
        else if(arr[i]!=smallest && arr[i]<smallest)
        second_smallest=arr[i];
    }
    return second_smallest;
}
int secondLargest(int arr[], int n){

    if(n<2)
    return -1;

    int largest=INT_MIN;
    int second_Largest=-1;
    for(int i=0; i<n; i++){
        if(arr[0]>largest){
            second_Largest=largest;
            largest=arr[i];

        }
        else if(arr[i]<largest && arr[i]>second_Largest)
        second_Largest=arr[i];

    }
    return second_Largest;
     
}


int main(){

    int arr[]={2,4,6,8,9,23,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sS=secondSmallest(arr,n);
    int sL=secondLargest(arr,n);
    cout<<" second smallest element is "<< sS<< endl;
    cout<<" Scond Largest element is "<< sL<<endl;
    return 0;

}