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
cout<<"\n Size of vector: "<<name.size();   
 
    cout<<"\n";
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout<<lsvector(nums,5)<<endl;
    revVector(nums);
    cout<<"\n Vector after reversing: ";
    for(int val:nums){
        cout<<val<<" ";
    }
 // 1. Create vector
    vector<int> v;

    // 2. Add elements
    v.push_back(50);
    v.push_back(20);
    v.push_back(80);
    v.push_back(10);
    v.push_back(40);

    cout << "Original Vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 3. Size
    cout << "Size: " << v.size() << endl;


    // 4. Access elements
    cout << "First Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;
    cout << "Element at index 2: " << v[2] << endl;


    // 5. Change element
    v[2] = 100;

    cout << "\nAfter changing index 2: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 6. Insert element
    v.insert(v.begin() + 2, 70);

    cout << "After inserting 70: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 7. Erase element
    v.erase(v.begin() + 3);

    cout << "After erasing index 3: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 8. Push another element
    v.push_back(90);

    cout << "After push_back(90): ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 9. Remove last element
    v.pop_back();

    cout << "After pop_back(): ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 10. Sort ascending
    sort(v.begin(), v.end());

    cout << "\nSorted Ascending: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 11. Sort descending
    sort(v.begin(), v.end(), greater<int>());

    cout << "Sorted Descending: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;


    // 12. Search using find
    int target = 70;

    auto it = find(v.begin(), v.end(), target);

    if(it != v.end()) {
        cout << "\n" << target << " found in vector" << endl;
        cout << "Index: " << it - v.begin() << endl;
    }
    else {
        cout << target << " not found" << endl;
    }


    // 13. Count occurrence
    int countElement = count(v.begin(), v.end(), 70);

    cout << "70 occurs " << countElement << " time(s)" << endl;


    // 14. Check empty
    if(v.empty()) {
        cout << "Vector is empty" << endl;
    }
    else {
        cout << "Vector is not empty" << endl;
    }


    // 15. Capacity
    cout << "Capacity: " << v.capacity() << endl;


    // 16. Iterate using iterator
    cout << "\nUsing Iterator: ";

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;


    // 17. Reverse iterator
    cout << "Reverse Order: ";

    for(auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }

    cout << endl;


    // 18. Clear vector
    v.clear();

    cout << "\nAfter clear(), Size: " << v.size() << endl;


    // 19. Check again
    if(v.empty()) {
        cout << "Vector is now empty" << endl;
    }
 
    return 0;
}
