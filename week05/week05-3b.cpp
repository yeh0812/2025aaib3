///week05-3b.cpp
/// CPE UVA 483 Word Scramble��r�ˤ�
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;///Part 1: Input
    while(getline(cin, line)){
    ///Ū�J�@��,�@��Ū,Ū��ctrl z �~����
        stringstream ss(line);///Part 3:��r��Ψ��_�r
        string word;///�Ψ��_�r
        while( ss >> word){///Part 3:��r��Ψ��_�r
            reverse( word.begin(), word.end());///Part 4:�ϹL��
            cout << " " << word;
        }
        cout << endl;///���棻
        ///Part 2: Output
        ///cout << line << endl; ///���H�K�L�X��
    }
}
