class Solution {
public:
    void merge(vector<int>& nums,int low,int mid,int high){
        if(low >= high) return;
        int i=low,j=mid+1;
        vector<int>temp;
        while(i <= mid and j <= high){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        
        while(i <= mid){
            temp.push_back(nums[i]);
                i++;
        }
        while(j <= high){
            temp.push_back(nums[j]);
                j++;
        }
        
        for(int i=low;i<=high;i++)
            nums[i]=temp[i-low];
    }
    int countPairs(vector<int>& nums,int low,int mid,int high){
        int j=mid+1,cnt=0;
        for(int i=low;i<=mid;i++){
            while(j <= high && nums[i] > 2LL*nums[j]){
                j++;
            }
            cnt+=(j-(mid+1));
        }
        return cnt;
    }
    int mergeSort(vector<int>& nums,int low,int high){
        int cnt=0;
        if(low >= high) return cnt;
        int mid=low+(high-low)/2;
        cnt+=mergeSort(nums,low,mid);
        cnt+=mergeSort(nums,mid+1,high);
        cnt+=countPairs(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};
