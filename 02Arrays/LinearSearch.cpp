#include<iostream>
using namespace std;


int linearSearch(int arr[],int sz,int target){
 for(int i=0;i<sz;i++){
        if(arr[i]==target){
        return i;
        }
       
    }
    return -1;
}

void reverseArray(int arr[],int size){
    int start=0;
    int end =size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5]={22,55,44,66,88};
    int target=55;
    int sz=5;
    cout<<linearSearch(arr,sz,target)<<endl;
    reverseArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}