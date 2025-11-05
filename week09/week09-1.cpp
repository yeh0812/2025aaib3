//week09-1.cpp
//LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M =accounts.size(), N = accounts[0].size();
        //左手M,右手N
        int ans = 0;
        for(int i=0;i<M;i++){//左手i,第i個入的存款
            int now = 0;
            for(int j=0;j<N;j++){//右手j
                now += accounts[i][j];//左手i,右手j
                //第i人,在第j銀行存的錢
            }
            ans = max(ans, now);//找最有錢的人,最大值
        }
        return ans;
    }
};
