///week02-2.cpp
///�n��c++ ���r��
#include <iostream>///�~��
#include <string>///�r��~��
using namespace std;///�ϥΩR�W�Ŷ� std
int main()
{
    cout << "�п�J�Ʀr: ";
	string a,ans;///c++���r��
	cin >> a;///Ū�J�r��
    ///�˹L�Ӫ��j�� �r����ץs a.length()
    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];///��r���˹L��, ��J����
    }
    cout << a << ans;
}
