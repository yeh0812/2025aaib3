//week15-2.cpp
//LeetCode  50. Pow(x, n)
class Solution {
public:
    double myPow(double x, long long int n) {
        if(x==1)return 1;//邊界條件
        if(n<0)return myPow(1/x, -n);//負的,函式呼叫函式
        if(n==0)return 1;//所有數的0次方,都是1

        double half = myPow(x, n/2);//一半
        if(n%2==0)return half * half;
        else return half * half * x;

    }
};
