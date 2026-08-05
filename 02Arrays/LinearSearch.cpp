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
int main(){
    int arr[5]={22,55,44,66,88};
    int target=55;
    int sz=5;
    cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
}