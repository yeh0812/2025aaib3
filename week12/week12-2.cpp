//week12-2.cpp
//LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0,d10 = 0,d20 = 0;
        for(int bill : bills){//C++進階迴圈
            if(bill==5)d5++;//拿到5元,開心收下
            else if(bill==10){
                if(d5>0){//還有5元可以找零
                    d10++;//拿到10元
                    d5--;//還有5元
                }else return false;//沒有零錢
            }else if(bill==20){
                if(d5>0 && d10>0){
                    d20++;//開心收下20元
                    d10--;//先給客人10元
                    d5--;//再給客人5元
                }else if(d5>=3){
                    d20++;//開心收下20元
                    d5 -= 3;//再給客人3張5元
                }else return false;//沒辦法找零
            }
        }
        return true;//成功找完零錢
    }
};
