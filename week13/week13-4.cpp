//week13-4.cpp 聖誕節倒數寫程式 Advent of code 2025
//第一題
int main() {
    char c;//每一行有一個英文
    int d;
    int now = 50;//現在刻度在50
    int ans = 0;//刻度有指到幾次0
    while(cin >> c >> d){
        //if(c=='L')cout << "往左轉" << d << "格\n";
        //if(c=='R')cout << "往右轉" << d << "格\n";

        if(c=='L') now -= d;//往左轉,減掉他
        if(c=='R') now += d;//往右轉,加上他

        now = (now % 100 + 100) % 100;//取餘數 + 100 再取餘數,得到0-99間
        if(now==0)ans++;
        //cout << "現在到達格子的刻度" << now << "\n";
    }
    cout << "答案是:" << ans;
}
