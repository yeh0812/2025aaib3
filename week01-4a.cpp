///week01-4a.cpp �ϥ�C�y���g
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a ,&b);/// C�y�� Ū���
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0)ans+=i;
    }
    printf("%d",ans);///C�y�� �L���
}
