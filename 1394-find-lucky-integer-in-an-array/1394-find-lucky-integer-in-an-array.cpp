class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        int ans=-1;
        for(auto x:freq){
            if(x.second==x.first){
                ans=x.first;
            }

        }
        return ans;

    }
};