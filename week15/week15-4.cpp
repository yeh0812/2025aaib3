//week15-4.cpp
//LeetCode 13. Roman to Integer
class Solution {
public:
    int Table(char c) {
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        if(c=='M')return 1000;
        return 0;
    }
    int romanToInt(string s){
        int ans = 0;//先寫錯誤版本
        int prev = 2000;//一定不會相同、更大的數字
        for(int i=0;i<s.length();i++){
            int now = Table( s[i] );//現在的位數
            if(prev < now)ans = ans + now - prev - prev;//倒裝句發生
            else ans += now;//正常句子,直接加法
            prev = now;//現在的數字,變成前一項
            //ans += Table( s[i] );//把字母 s[i] 丟入 Table()函式//錯誤版本
        }
        return ans;
    }
};
