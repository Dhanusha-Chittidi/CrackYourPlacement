vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int l=0,m=matrix.size()-1;
        int p=0,q=matrix[0].size()-1;
        
        while(l<=m && p<=q){
            for(int i=p;i<=q;i++){
                ans.push_back(matrix[l][i]);
            }
            l++;
            for(int i=l;i<=m;i++){
                ans.push_back(matrix[i][q]);
            }
            q--;
            if(l<=m){
                for(int i=q;i>=p;i--){
                    ans.push_back(matrix[m][i]);
                }
                m--;
            }
            if(p <= q){
                for(int i=m;i>=l;i--){
                    ans.push_back(matrix[i][p]);
                }
                p++;
            }
        }
        return ans;
    }
