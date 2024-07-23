 int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
       int left[k],right[k];
       left[0]=arr[0],right[k-1]=arr[n-1];
        
        for(int i=1;i<k;i++){
            left[i]=left[i-1]+arr[i];
            right[k-i-1]=right[k-i]+arr[n-i-1];
        }
        int ans=right[0];
        for(int i=0;i<k;i++){
            ans=max(ans,left[i]+((i+1)< k ? right[i+1] : 0));
        }
        return ans;
    }
