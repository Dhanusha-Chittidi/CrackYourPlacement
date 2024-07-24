bool helper(int i,int j,vector<vector<char>>& board, string& word,int idx){
        if(idx==word.size()) return true;
        
        if(i < 0 or j < 0 or i >= board.size() or j >= board[0].size()) return false;
        if(word[idx] != board[i][j]) return false;
        
        int temp=board[i][j];
        board[i][j]='*';
        bool result=helper(i+1,j,board,word,idx+1) or
                    helper(i-1,j,board,word,idx+1) or
            helper(i,j-1,board,word,idx+1) or
            helper(i,j+1,board,word,idx+1);
        
        board[i][j]=temp;
        return result;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(helper(i,j,board,word,0)) return true;
            }
        }
        return false;
    }
