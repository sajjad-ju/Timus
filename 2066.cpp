#include <stdio.h>

int main( )
{
    int a, b, c, ans, i, temp;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (b == 1 || b == 0) ans = a - (b + c);
        else    ans = a - b * c;
        printf("%d\n", ans);
    }

    return 0;
}
