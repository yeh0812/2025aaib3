///week06-1.cpp
/// LeetCode 242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        //先看字串長度是否相同
        if(s.length() != t.length()) return false;//不同,就直接失敗

        //先把字串 s 的字母,累積一下
        int R[26] = {};//要看Recycle回收桶,再來分類我們的字母
        for(int i=0;i<s.length();i++){
            char c =s[i] - 'a';//本來是小寫字母,但要變成0-25所以要減a
            R[c]++;
        }
        for(int i=0;i<t.length();i++){
            char c = t[i] -'a';
            R[c]--;
            if(R[c]<0) return false;
        }
        return true;
    }
};
