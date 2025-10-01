//week04-5.cpp
//LeetCode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        for(int i=N-1; i>=0;i--){
            if(digits[i]==9) digits[i] = 0;//進位,變成0
            else{
                digits[i]++;//就+1後,沒有進位
                return digits;//找到答案了,就送出去
            }
        }
        //都沒找到答案,也就是9,9,9一直進位
        digits.insert(digits.begin(), 1);//開始的地方,插入1
        return digits;
    }
};
