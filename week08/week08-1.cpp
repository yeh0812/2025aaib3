//week08-1.cpp
//LeetCode 3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N=0;//�Ĥ@�B���έ�֪k,���n�O�G�i�쪺�X���
        while(n>0){
            n=n/2;//�鱼�@�h
            N++;//�h�F1�Ӧ��
        }
        cout << "�{�b�o�{n�O�X��ƩO? "<< N << "���\n";
        int ans=0;//�ĤG�B,�A�ΰj��,�զX�X�������O1���G�i�쪺N���
        for(int i=0;i<N;i++){
            ans=ans*2+1;
        }
        return ans;
    }
};
