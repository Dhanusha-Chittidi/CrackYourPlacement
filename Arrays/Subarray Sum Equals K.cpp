int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int subarrays=0;
        int sum=0;
        mp[sum]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            subarrays+=mp[sum-k];
            mp[sum]++;
        }
        return subarrays;
    }
