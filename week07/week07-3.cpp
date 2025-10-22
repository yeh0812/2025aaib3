//week07-3.cpp
//LeetCode 682. Baseball Game 璸衡翴计
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;//Part 4:璶р戈,皚a柑
        for(string op : operations){// Part 1:C++秈顶癹伴
            cout << "瞷弄: " << op << "\n";//Part 2:ウ琌街, 单奔
            //Part 3:帮if耞璶或家览
            if(op[0]=='C'){//Clear 睲埃程
                a.pop_back();//メ奔程
            }else if(op[0]=='D'){//程 跑, 程
                a.push_back( a.back()*2 );//2 Part 6:back()
            }else if(op[0]=='+'){//临ぃ笵, 单
                int temp = a.back();//й程óó礟
                a.pop_back();//р程ó秨ǐ
                int temp2 = a.back();//й计材óó礟
                a.push_back(temp);//рó氨ㄓ
                a.push_back( temp + temp2);//р程2癬ㄓ,程
            }else{//计﹃,璶程
                a.push_back( stoi(op));//Part 4: .push_back()
            }
        }
        int ans = 0;
        for(int now : a){//Part 5: C++ 秈顶癹伴 璶皚,р场癬ㄓ
            ans += now;//cout << now << " ";//Part 2:ウ琌街,单奔
        }
        return ans;//繦獽 return 单糶痷氮
    }
};
