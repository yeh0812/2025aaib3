///week07-1b.cpp
///TAICA NYCU
///Input: 1-9 ���Ʀr Output:¶��骺���
///ex. Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3 �`�@��5�h��
///Input 2 ��3�h��, Input 3 ��5�h��, Input 5 ��9�h��
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;///Step 1: Input

    for(int i=1; i<2*n; i++){///Step 3: for�j��, �Ӽh
       for(int j=1; j<2*n; j++){///�ĴX��
            if(j>1)cout << " ";///Step 5: �����Y +���[ +���[ +���[ +���[
            int d = max(abs(i - n), abs(j - n));///Step 6:��Z�����̤j��
            cout << d+1;///cout << n;
       }
        ///cout << "�{�b�O��i��, i:" << i;///Step 4:�Ӽh�N�[
        cout << endl;///Step 2:Output,����
    }
}
