//week05-1.cpp
// LeetCode 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//��r���iostream �� cin�ӥ�
        string word;//�r��
        //ss >> word;// ���O cin >> word�@��
        //ss >> word;
        while(ss >> word){//�@��Ū,Ū�줣��Ū����
            //�̭�����Ƴ��S��
        }
        cout << word;

        return word.length();
    }
};
