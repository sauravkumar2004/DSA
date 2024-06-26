class Solution {
public:
    vector<vector<int>> grid;
    vector<vector<int>> dp;
    int f(int r,int c){
        if(r==grid.size()-1) return grid[r][c];
        if(dp[r][c]!=-1) return dp[r][c];
        return dp[r][c]=grid[r][c]+min(f(r+1,c),f(r+1,c+1));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        grid=triangle;
        dp.clear();
        dp.resize(205,vector<int>(205,-1));
        return f(0,0);
    }
};