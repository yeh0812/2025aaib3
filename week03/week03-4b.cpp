//week03-4b.cpp
//283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;// nums[k++]=nums[i]�o�ؼg�k
        for(int i=0; i<nums.size();i++){//�������@��
            if(nums[i] != 0) nums[k++] = nums[i];//�h��k����m,
        }

        for(int i=k; i<nums.size();i++){//�qk���k��0
             nums[i] = 0;//����,��0����
        }
    }
};
