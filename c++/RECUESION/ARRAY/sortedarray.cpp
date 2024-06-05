#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
    }
    return true;
}

int main(){

    int arr[7]={1,2,3,7,5,6,4};
    int n=7;
    cout<< isSorted(arr,n)<< " "<<endl;  

  
return 0;
}