#include<iostream>
using namespace std;

void movezeros(int arr[],int s,int e){
    int i=0; 
    for(int j=0; j<=e; j++){
        if (arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }    
    }
}
int main(){
    int arr[]={0,1,0,3,12,8,0};
    int n=7;
    movezeros(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<< arr[i]<<endl;
    }
    return 0;
 
}