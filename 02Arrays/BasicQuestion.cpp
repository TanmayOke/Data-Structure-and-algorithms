#include<iostream>
using namespace std;

int main(){
    int smallInd=0,largeInd=0;
    //Smallest and largest element in array
    int nums[5]={22,55,44,66,88};
    int smallest = INT_FAST16_MAX;
    for(int i=0;i<5;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
           
        }
        //smallest=min(nums[i],smallest);
    }
    cout<<"Smallest element is "<<smallest<<endl;
    
    int largest = INT_FAST16_MIN;
        for(int i=0;i<5;i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
        //largest=max(nums[i],largest);
    }
    cout<<"Largest element is "<<largest<<endl;
    return 0;   
}