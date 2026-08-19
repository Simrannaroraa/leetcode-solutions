class Solution {
public:
 void reversePart(vector<int>& nums, int left,int right){
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()) return;
        k=k%nums.size();
        //reverse entire arr
        reversePart(nums,0,nums.size()-1);
        //revrese first k elements
        reversePart(nums,0,k-1);
        //revrese remaining elements 
        reversePart(nums,k,nums.size()-1);

       
    }
    
};