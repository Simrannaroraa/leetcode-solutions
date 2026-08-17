class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> freq;
        for(int x : nums){
        freq[x]++;
    }
    for(auto x : freq){
    if(x.second % 2 != 0)
        return false;
    }
return true;
    }
};