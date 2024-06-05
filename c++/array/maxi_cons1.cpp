#include<iostream>
using namespace std;

int findMaxConsOnes(int arr[], int n ){
    int count=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        if (arr[i]==1)
        {
            count++;
        }
        else{
            count=0;
        }
        maxi=max( maxi,count);
        
    }
    return maxi;
}

int main(){

    int arr[]={1,1,0,1,1,1,1,1};
    int n=8;
    int ans=findMaxConsOnes(arr,n);
    

        cout<<"the maximum ones in this array is "<< ans <<endl;
    

       // cout<< " the maximum Ones in this array is "<< ans<<  endl;
        
    
    return 0;

}