#include<iostream>
using namespace std;

bool isArraySorted(int *arr,int size){
    //base case
    if(size==0|| size==1)
    return true;

    if(arr[0]>arr[1])
    return false;
    else{
        bool remainingpart=isArraySorted(arr+1 ,size-1);
        return remainingpart;
    }
}

int main(){

    int arr[6]={2,4,6,7,8,7};
    int size=6;

    bool ans= isArraySorted(arr,size);
    if(ans){
        cout<<" array is sorted"<<endl;
    }
    else{
        cout<<" array is not sorted "<< endl;
    }
    return 0;

}