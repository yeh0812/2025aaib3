//week03-3a.cpp
//1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //1�e�W�����,�N��M�ܦ��u����ơv
        for(int i=0;i<nums.size();i++){
            ans *= nums[i]; //��}�C�u���i�h�v
        }//�Ʀr�V���V�j,�N�z���F
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
