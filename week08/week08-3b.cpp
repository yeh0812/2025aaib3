//week08-3b.cpp
//LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    //小幫手程式刪掉
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};//有大括號,會給0
        int now = 1;//1: 玩家A 第一個玩家 2:玩家B 第二個玩家
        int winner = 0;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now;//a[i][j] = 1;//玩家a 第一個玩家
            //myPrint(a);//把陣列印出來
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;//那一條橫線 判斷誰得勝
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;//那一條直線
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;//斜線 左上 右下
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;//斜線 右上 左下
            if(now==1) now = 2;//A下完,換B下
            else now = 1;//B下完,換A下
        }
        if(winner==1)return"A";
        else if(winner==2)return"B";
        else if(moves.size()==9)return "Draw";//走第9步 才示平手
        else return "Pending";//陷阱,還沒下完,要等Pending
    }
};
