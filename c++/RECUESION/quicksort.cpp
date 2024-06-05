#include<iostream>
using namespace std;

int partition (int arr[],int s, int e){

    int pivot=arr[s];
    int cnt=0; 
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right positon
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);

    //left and right wala part smbhal lete h
    int i=s, j=e;

    while(i<pivotindex && j>pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<pivotindex && j>pivotindex){
        swap(arr[i++],arr[j--]);

    }

    return pivotindex;
}

    
void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e)
    return;
    //partition
    int p=partition(arr ,s,e);

    //recursive call
    quicksort(arr ,s,p-1);
    quicksort(arr,p+1, e);


}

int main(){

int arr[6]={9,3,4,2,1,8};
int n=6;

quicksort(arr, 0 , n-1);

for(int i=0;i<n; i++){
 cout<< arr[i] << " " ;
}
return 0;

}
