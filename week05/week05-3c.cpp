///week05-3c.cpp
/// CPE UVA 483 Word Scramble把字弄反
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;///Part 1: Input
    while(getline(cin, line)){
    ///讀入一行,一直讀,讀到ctrl z 才結束
        stringstream ss(line);///Part 3:把字串用來斷字
        string word;///用來斷字
        ss >> word;///Part 5:解決空格問題,火車頭 不用空格
        reverse( word.begin(), word.end());
        cout << word;

        while( ss >> word){///Part 3:把字串用來斷字
            reverse( word.begin(), word.end());///Part 4:反過來
            cout << " " << word;
        }
        cout << endl;///跳行˙
        ///Part 2: Output
        ///cout << line << endl; ///先隨便印出來
    }
}
