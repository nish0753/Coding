#include<iostream>
using namespace std;

int  shiftarray(int arr[],int n){

    int temp =arr[3];
    for(int i=3; i<n; i++){
        arr[i-3]=arr[i];
    }
    arr[n-3]=temp;
    return temp;
}

int main(){

int arr[]={1,2,3,4,5};
int size=5;
shiftarray(arr ,size);

}