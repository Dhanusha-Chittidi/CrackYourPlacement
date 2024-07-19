void merge(vector<int>& arr, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=n+m-1;
        while(i>=0&& j>=0){
            if(arr[i]  > nums2[j]){
                arr[k--]=arr[i--];
            }else{
                arr[k--]=nums2[j--];
            } 
        }
        while(j>=0){
            arr[k--]=nums2[j--];
       }
    }
