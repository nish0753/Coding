#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){
    //base case
    if(size==0)
    return false;
    if(arr[0]==k)
    return true;

    else{
        bool remainingpart=linearSearch(arr+1, size-1, k);
        return remainingpart;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=5;

    bool ans= linearSearch(arr,size,key);
    if(ans){
        cout<<" key is found"<< ans << endl;
    }
    else{
      cout<<  "key is not found"<<endl;
    }

    return 0;



}