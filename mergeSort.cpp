#include<iostream>
using namespace std;

void mergSort(int arr, int start, int mid, int end){

    
}

void mergSort(int arr[],int start, int end){
    if(start<= end){
        return ;
    }

    int mid = (start +  end)/2;
    //breaking in left part
    mergSort(arr, start, mid);
    mergSort(arr, mid+1, end);
    merg(arr, start, mid, end);

}


int main(){
    int arr[] = {1,2,4, 4,6,21,213};
    int n = 7;
    mergSort(arr, 0 ,n);    
    
    return 0;
}