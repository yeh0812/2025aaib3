//week11-1a.cpp 二合一
//LeetCode 2154. Keep Multiplying Found Values by Two
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){//用while迴圈一直做
            int found = 0;//一開始還沒找到
            //找一下original有沒有在nums裡
            for(int i=0;i<nums.size();i++){
                if(nums[i] == original) found = 1;//找到了
            }
            if(found==0)break;//失敗
            else original = original * 2;//有找到
        }
        return original;
    }
};
