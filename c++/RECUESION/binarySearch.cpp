#include<iostream>
using namespace std;
void print(int arr[],int s,int e)
{
    for(int i=s;i<=e;i++ ){
        cout<< arr[i]<<" ";
        cout<< endl;
    }
}


bool bianrySearch(int *arr,int s, int e, int k){
    print(arr,s,e);
    //base case
    //element not found
    if(s>e)
    return false;

    int mid=s+(e-s)/2;
    cout<<" value of arr mid is"<< arr[mid]<<endl;
    //element found
    if(arr[mid]==k)
    return true;

    if(arr[mid] < k){
        return bianrySearch(arr,mid+1,e,k);
    }
    else
    {
        return bianrySearch(arr,s,mid-1,k);
    }  
}

int main(){

int arr[7]={2,4,6,10,14,18};
int size=7;
int key=14;

cout<<"present or not " << bianrySearch(arr,0, size-1,key) << endl;

return 0;
}
