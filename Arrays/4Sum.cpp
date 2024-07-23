vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1,r=n-1;
                while(l < r){
                    if((long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[r]==target) {
                        vector<int>temp({nums[i],nums[j],nums[l],nums[r]});
                        st.insert(temp);
                        l++,r--;
                    }else if((long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[r] < target) l++;
                    else r--;
                }
            }
        }
        
        for(auto x : st){
            ans.push_back(x);
        }
        return ans;
    }
