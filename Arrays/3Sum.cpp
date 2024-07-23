vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            if(nums[i] > 0) break;
            if(i!=0 && nums[i]==nums[i-1]) continue; //To avoid duplicates
            
            int st=i+1,end=n-1;
            while(st < end){
                if(nums[i]+nums[st]+nums[end]==0){
                    vector<int>temp{nums[i],nums[st],nums[end]};
                    ans.push_back(temp);
                    
                    int last_st=nums[st],last_end=end; //To avoid duplicates
                    while(st < n && nums[st]==last_st) st++;
                    while(end >=0 && nums[end]==last_end) end--;
                    
                }else if(nums[i]+nums[st]+nums[end] < 0) st++;
                else end--;
            }
        }
        return ans;
    }
