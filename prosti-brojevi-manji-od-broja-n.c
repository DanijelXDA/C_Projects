#include <stdio.h>

void prostbroj(int a) {
	int i, br = 0;

	for(i = 2; i <= a / 2; i++)
		if(a % i == 0)
			br++;

	if(br == 0)
		printf("%d ", a);

	return;
}

int main(void) {
	int i, n;

	printf ("\nUnesi broj n: ");
	scanf("%d", &n);

    for(i = 2; i < n; i++)
        prostbroj(i);

	return 0;
}
