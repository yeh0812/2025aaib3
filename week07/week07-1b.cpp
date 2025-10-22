///week07-1b.cpp
///TAICA NYCU
///Input: 1-9 计 Output:露伴伴よ
///ex. Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3 羆Τ5糷加
///Input 2 Τ3糷加, Input 3 Τ5糷加, Input 5 Τ9糷加
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;///Step 1: Input

    for(int i=1; i<2*n; i++){///Step 3: for癹伴, 加糷
       for(int j=1; j<2*n; j++){///材碭
            if(j>1)cout << " ";///Step 5: ó繷 +ó碵 +ó碵 +ó碵 +ó碵
            int d = max(abs(i - n), abs(j - n));///Step 6:т禯瞒程
            cout << d+1;///cout << n;
       }
        ///cout << "瞷琌材i加, i:" << i;///Step 4:加糷芅琜
        cout << endl;///Step 2:Output,铬︽
    }
}
