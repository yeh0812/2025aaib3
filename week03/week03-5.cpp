//week03-5.cpp
//1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());//把陣列小到大排好
        int d = arr[1]-arr[0];//兩數差 d
        for(int i=1; i<arr.size();i++){
            if(arr[i] - arr[i-1] != d)return false;
        }//如果後項-前項不是d的話,就失敗
        return true;
    }
};
