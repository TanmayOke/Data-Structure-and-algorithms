#include<iostream>
using namespace std;
#include<vector>


vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for(int j =i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

//=======second approach========//
vector<int> PS(vector<int> nums,int target){
    vector<int> ans;
    int i=0,j=nums.size()-1;
    int pairSum=nums[i]+nums[j];
if(pairSum>target){
    j--;
}
else if(pairSum<target){
    i++;
}
else{
    ans.push_back(i);
    ans.push_back(j);
    return ans;
}

    return ans;
}
int main(){

    vector<int> nums = {2,7,11,15};
    int target = 18;


    vector<int> result = pairSum(nums, target);
    cout<<result[0]<<" "<<result[1]<<endl;

    vector<int> result2=PS(nums,17);
    cout<<result2[0]<< " "<<result2[1]<<endl;
    return 0;
}