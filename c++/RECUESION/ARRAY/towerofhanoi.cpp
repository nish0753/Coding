#include<iostream>
using namespace std;

void towerofhanoi(int n, char from_tower, char to_tower,char aux_tower){
    //base case
    if(n==0){
        return;
    }
    towerofhanoi(n-1,from_tower,aux_tower, to_tower);
        cout<< " Move disk "<< n << " from rod " << from_tower << " to rod " << to_tower <<endl; 
        towerofhanoi(n-1, aux_tower,to_tower,from_tower);
    
}

int main(){

int n=2;

towerofhanoi(n, 'A','C','B');
return 0;

}