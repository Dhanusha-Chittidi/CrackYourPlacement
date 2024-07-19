void moveZeroes(vector<int>& nums) {
        int n=nums.size(),count0=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0) count0++;
            else{
                swap(nums[i-count0],nums[i]);
            }
        }
    }
