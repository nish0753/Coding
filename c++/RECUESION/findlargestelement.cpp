#include<iostream>
using namespace std;

int findLargestelement(int arr[],int n){
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){

int arr[]={8,9,10,23,98}; int size=5;
 int max=findLargestelement(arr,size);
cout<<" The largest element in the array is "<< max<< endl;
return 0;
}