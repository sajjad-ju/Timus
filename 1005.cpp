#include <stdio.h>
#include <math.h>

void SORT(int ara[], int n)
{
	int i, j, k, x;

	for (i = 0; i < n; i++) {
		x = ara[i];
		j = i - 1;
		while (j >= 0 && ara[i] > x) {
            ara[j + 1] = ara[j];
            j--;
		}
		ara[j + 1] = x;
	}

	return;
}

int main( )
{
	int ara[25], n, i, j, first_pile, second_pile, ans;

	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++) {
			scanf("%d", &ara[i]);
		}
		SORT(ara, n);

		first_pile = second_pile = 0;

		for (i = 0; i < n; i++) {
			if (first_pile < second_pile) {
				first_pile += ara[i];
			}
			else    second_pile += ara[i];
		}

		ans = fabs(first_pile - second_pile);

		printf("%d\n", ans);
	}

	return 0;
}
