///week05-2.cpp
///�d�� stringstream
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string line;///�ǳƩ� �@��� ���r��
    getline( cin, line );///�@��Ū�J�@���
    cout << line << endl;

    stringstream ss(line); ///(�s��)��string�ܦ�stream
    string word;
    while(ss >> word){
        cout << "ssŪ��@�Ӧr: " << word << endl;
    }
}
