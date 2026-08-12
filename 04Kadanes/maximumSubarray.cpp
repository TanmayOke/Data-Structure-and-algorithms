#include<iostream>
#include<vector>
using namespace std;
//Kadane's Algorithm
int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int maxSum=INT8_MIN;

        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            maxSum=max(currSum,maxSum);
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

//BRUTE FORCE APPROACH
    int maxSum=0;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);
        }

    }

    cout<<"Max Sum is: "<<maxSum<<endl;



    return 0;

}