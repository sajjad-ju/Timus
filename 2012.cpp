#include <stdio.h>

int main( )
{
    int f, req_time;

    while (scanf("%d", &f) != EOF) {
        req_time = (12 - f) * 45;
        if (req_time <= 240)    printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}
