///week01-1.cpp
// LeetCode �j�����w
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(),N = needle.length();
        for(int i = 0;i <= H - N;i++){//i�չL�Ҧ���m
            if(haystack.substr(i,N)==needle)return i;
            //�qi�}�l,�ťXN�Ӧr���u���M�ۦP�v��쵪��
        }
        return -1;//�S����쵪��,�n�^��-1,�N����
    }
};
