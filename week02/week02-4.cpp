///week02-4.cpp �ǲ߭p�e��2�D
///389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};/// �i�H�α�l�Ӹ˦r��, �j�A��,�N�� �@�}�l�Ū�
        for(int i=0; i<s.length(); i++){
            char c = s[i];///���X�r��
            A[c]++;///��r��,��J��l��
        }
        for(int i=0;i<t.length(); i++){
            char c = t[i];///���X�r��
            A[c]--;///�q��l��,���X�r��
            if(A[c]<0)return c;
        }
        return 0;///���|�Ψ�o�@���
    }
};
