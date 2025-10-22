//week07-2.cpp
//LeetCode 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;//一開始的位置, 在(0,0)
        //for(int i=0;i<moves.length(); i++){
        //    char c = moves[i];
        for(char c : moves){
            if(c=='U'){// up往上
                y++;
            }else if(c=='D'){// down往下
                y--;
            }else if(c=='L'){// left往左
                x--;
            }else if(c=='R'){// right往右
                x++;
            }

        }//離開迴圈後
        if(x==0 && y==0)return true;
        else return false;
    }
};
