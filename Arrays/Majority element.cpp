int majorityElement(vector<int>& nums) {
        int maj=-1;
        int count=0;
        for(auto x : nums){
            if(count==0) maj=x;
            
            if(x==maj) count++;
            else count--;
        }
        return maj;
    }
