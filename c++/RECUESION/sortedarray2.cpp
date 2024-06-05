#include<iostream>
using namespace std;

bool isarryasorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1])
    return false;
    //recursive call
    else{
        bool remainingpart=isarryasorted(arr+1, size-1);{
            return remainingpart;
        }
    }
}

int main(){

int arr[8]={1,2,3,4,5,6,7,5};
int size=8;

bool ans=isarryasorted(arr,size);
if(ans){
    cout<<" Array is sorted"<< endl;
}
else{
    cout<<" Array is not sorted "<< endl;
}
return 0;

}