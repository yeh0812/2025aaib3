//week07-3.cpp
//LeetCode 682. Baseball Game �p���I��
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;//Part 4:�n����,���}�Ca�̭�
        for(string op : operations){// Part 1:C++�i���j��
            cout << "�{�bŪ��F: " << op << "\n";//Part 2:�ݥ��O��, ���@�U�R��
            //Part 3:�@��if�P�_�n������
            if(op[0]=='C'){//Clear �M���̫�@��
                a.pop_back();//�ᱼ�̫�@��
            }else if(op[0]=='D'){//�̫�@�� �ܤG��, �A�u�[��̫᭱�v
                a.push_back( a.back()*2 );//��2�� Part 6:back()
            }else if(op[0]=='+'){//�٤����D, ���@�U�A��
                int temp = a.back();//���۳̫�@�x�������P
                a.pop_back();//��̫�@�x���}��
                int temp2 = a.back();//�i�H�ۭ˼ƲĤG�x�������P
                a.push_back(temp);//���誺�����^��
                a.push_back( temp + temp2);//��̫�2�ӥ[�_��,�A�u�[��̫᭱�v
            }else{//�Ʀr���r��,�n�u�[��̫᭱�v
                a.push_back( stoi(op));//Part 4: .push_back()
            }
        }
        int ans = 0;
        for(int now : a){//Part 5: C++ �i���j�� �n�ݰ}�C����,������[�_��
            ans += now;//cout << now << " ";//Part 2:�ݥ��O��,���@�U�R��
        }
        return ans;//���H�K return ���@�U�A�g�u������
    }
};
