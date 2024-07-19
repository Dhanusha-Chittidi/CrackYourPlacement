vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            int partner=target-nums[i];
            if(mp.count(partner)) return {i,mp[partner]};
            
            mp[nums[i]]=i;
        }
        return {};
    }
