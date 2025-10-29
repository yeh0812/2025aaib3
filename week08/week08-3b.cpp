//week08-3b.cpp
//LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    //�p����{���R��
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};//���j�A��,�|��0
        int now = 1;//1: ���aA �Ĥ@�Ӫ��a 2:���aB �ĤG�Ӫ��a
        int winner = 0;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now;//a[i][j] = 1;//���aa �Ĥ@�Ӫ��a
            //myPrint(a);//��}�C�L�X��
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;//���@����u �P�_�ֱo��
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;//���@�����u
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;//�׽u ���W �k�U
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;//�׽u �k�W ���U
            if(now==1) now = 2;//A�U��,��B�U
            else now = 1;//B�U��,��A�U
        }
        if(winner==1)return"A";
        else if(winner==2)return"B";
        else if(moves.size()==9)return "Draw";//����9�B �~�ܥ���
        else return "Pending";//����,�٨S�U��,�n��Pending
    }
};
