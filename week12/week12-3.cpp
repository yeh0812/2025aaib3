//week12-3.cpp
//LeetCode 976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());//排序(又快又好)
        for(int i=nums.size()-1; i>=0; i--){//用迴圈,到大小都試一次
            //倒過來的迴圈
            //cout << nums[i] << " ",//印出大到小的數
        }//先印出 大到小 等一下這3行會刪掉
        for(int i=nums.size()-1; i>=2; i--){
            if(nums[i] < nums[i-1]+nums[i-2])return nums[i]+nums[i-1]+nums[i-2];
        }
        return 0;//找不到任何 合法 的三角形,就return 0
    }
};
