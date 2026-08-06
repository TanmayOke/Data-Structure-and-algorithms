#include<iostream>
using namespace std;

#include<vector>
 int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val : nums){
            ans=ans^val;
        }
        return ans;
    }

 int lsvector(vector<int> &nums,int target){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            cout<<"Element found at index: "<<i<<endl;

            return i;
        }
     }
    return -1;
 }   

void revVector(vector<int> &nums){
    int start =0;
    int end = nums.size()-1;
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }

}


int main(){
    vector<int> c={1,2,3,4,5,6,7,8,900};
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
    vector<int> vec1(5,1);
       for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<"\n";
    vector<char> name={'T','A','N','M','A','Y'};
    cout<<"Vector of characrters: ";
    for(char val:name){
        cout<<val<<" ";
    }
    name.push_back('S');
    cout<<"\n Vector after push back: ";
      for(char val:name){
        cout<<val<<" ";
    }
     name.pop_back();
    cout<<"\n Vector after pop back: ";
      for(char val:name){
        cout<<val<<" ";
    }
    cout<<"\n First element: "<<name.front();
    cout<<"\n Last element: "<<name.back();
    cout<<"\n Size of vector: "<<name.size();   

    cout<<"\n";
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout<<lsvector(nums,5)<<endl;
    revVector(nums);
    cout<<"\n Vector after reversing: ";
    for(int val:nums){
        cout<<val<<" ";
    }
    return 0;
}