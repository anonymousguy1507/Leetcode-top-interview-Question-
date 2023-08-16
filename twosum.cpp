class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> umap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(umap.find(target-nums[i]) != umap.end()) //searching element in hashmap
            {
                ans.push_back(umap[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            umap[nums[i]] = i; //fill the hashmap
        }
        return ans;
    }
};
