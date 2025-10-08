//week05-1.cpp
// LeetCode 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//把字串當iostream 的 cin來用
        string word;//字串
        //ss >> word;// 像是 cin >> word一樣
        //ss >> word;
        while(ss >> word){//一直讀,讀到不能讀為止
            //裡面什麼事都沒做
        }
        cout << word;

        return word.length();
    }
};
