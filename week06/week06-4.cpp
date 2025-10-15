//week06-4.cpp
//LeetCode 3349. Adjacent Increasing Subarrays Detection I
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        //�ϥΪ��C���`���� combo �s��
        int N = nums.size();//�}�C�j�p
        vector<int> combo(N, 1);//��N��,�̭������Ӫ���1
        for(int i=1;i<N;i++){
            if(nums[i-1] < nums[i]) combo[i] = combo[i-1] + 1;
        }//�ܥXcombo�}�C�̭���������,���X��,�N��e�@��+1
        //�n�ˬd�۾F��Ӫ��׬�k���}�C
        for(int i=0;i<N-k;i++){
            if(combo[i]>=k && combo[i+k]>=k)return true;
        }
        return 0;
    }
};
