        int n=arr.size();
        int l=0,r=n-1;
        int i=0;
        while(i<= r && i< n){
            if(arr[i]==0){
                swap(arr[i],arr[l]);
                i++;
                l++;
            }else if(arr[i]==1) i++;
            else {
                swap(arr[r],arr[i]);
                r--;
            }
        }
