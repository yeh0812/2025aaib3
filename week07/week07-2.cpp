//week07-2.cpp
//LeetCode 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;//�@�}�l����m, �b(0,0)
        //for(int i=0;i<moves.length(); i++){
        //    char c = moves[i];
        for(char c : moves){
            if(c=='U'){// up���W
                y++;
            }else if(c=='D'){// down���U
                y--;
            }else if(c=='L'){// left����
                x--;
            }else if(c=='R'){// right���k
                x++;
            }

        }//���}�j���
        if(x==0 && y==0)return true;
        else return false;
    }
};
