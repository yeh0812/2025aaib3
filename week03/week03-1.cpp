///week03-1.cpp
///C++�}�C vector<int>
#include <iostream>/// cin cout �n�Ϊ�
#include <vector>
using namespace std;
int main()
{
    cout<<"�п�J4�ӼƦr: ";
    vector<int> a;///�u���Y�ۦp�v ���}�C

    int now;
    for(int i=0;i<4;i++){
        cin >> now;///�{�b��J1�ӼƦr
        a.push_back(now);///����a���̫᭱
    }

    for(int i=0;i<a.size(); i++){///�̷Ӱ}�C���j�p.size()�ӦL
        cout << a[i] << ' ';
    }

    cout <<"�{�b�{���X��,�S���J�F99 88 ��ӼƦr,���G�O?\n";

    a.push_back(99);///����a���̫᭱
    a.push_back(88);///����a���̫᭱

    for(int i=0;i<a.size();i++){///�̷Ӱ}�C���j�p.size()�ӦL
        cout << a[i] << ' ';///�Ʀr�᭱,���Ů�
    }
}
