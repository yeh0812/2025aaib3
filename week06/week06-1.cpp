///week06-1.cpp
/// LeetCode 242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        //���ݦr����׬O�_�ۦP
        if(s.length() != t.length()) return false;//���P,�N��������

        //����r�� s ���r��,�ֿn�@�U
        int R[26] = {};//�n��Recycle�^����,�A�Ӥ����ڭ̪��r��
        for(int i=0;i<s.length();i++){
            char c =s[i] - 'a';//���ӬO�p�g�r��,���n�ܦ�0-25�ҥH�n��a
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
