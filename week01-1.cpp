///week01-1.cpp
// LeetCode 大海撈針
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(),N = needle.length();
        for(int i = 0;i <= H - N;i++){//i試過所有位置
            if(haystack.substr(i,N)==needle)return i;
            //從i開始,剪出N個字母「竟然相同」找到答案
        }
        return -1;//沒有找到答案,要回傳-1,代表失敗
    }
};
