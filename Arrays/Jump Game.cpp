bool canJump(vector<int>& nums) {
        int steps=0,n=nums.size();
        int i;
        for(i=0;i<n && i<=steps;i++){
            steps=max(steps,i+nums[i]);
            if(steps==n-1) return true;
        }
        if(i==n) return true;
        return false;
    }
