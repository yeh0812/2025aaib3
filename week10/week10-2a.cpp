//week10-2a.cpp(太慢了)
//LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i=low;i<=high;i++){
            if(i%2==1)ans++;
        }//先寫錯的版本 用for迴圈(可以過)
        return ans;
    }
};
