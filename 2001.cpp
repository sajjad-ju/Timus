#include <stdio.h>

int main( )
{
    int i, a, b, w[6];

    for (i = 0; i < 6; i++) {
        scanf("%d", &w[i]);
    }

    a = w[0] - w[4];
    b = w[1] - w[3];

    printf("%d %d\n", a, b);

    return 0;
}
