//week04-5.cpp
//LeetCode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        for(int i=N-1; i>=0;i--){
            if(digits[i]==9) digits[i] = 0;//�i��,�ܦ�0
            else{
                digits[i]++;//�N+1��,�S���i��
                return digits;//��쵪�פF,�N�e�X�h
            }
        }
        //���S��쵪��,�]�N�O9,9,9�@���i��
        digits.insert(digits.begin(), 1);//�}�l���a��,���J1
        return digits;
    }
};
