//week06-4.cpp
//LeetCode 3349. Adjacent Increasing Subarrays Detection I
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        //使用玩遊戲常見的 combo 連續
        int N = nums.size();//陣列大小
        vector<int> combo(N, 1);//有N格,裡面都放原來的值1
        for(int i=1;i<N;i++){
            if(nums[i-1] < nums[i]) combo[i] = combo[i-1] + 1;
        }//變出combo陣列裡面全部的值,有合格,就比前一項+1
        //要檢查相鄰兩個長度為k的陣列
        for(int i=0;i<N-k;i++){
            if(combo[i]>=k && combo[i+k]>=k)return true;
        }
        return 0;
    }
};
