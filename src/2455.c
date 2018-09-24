#include <stdio.h>

int main() {
	int train[4][2], a1, a2, a3;
	for(int i=1; i<=4; i++) {
		scanf("%d %d", &train[i][0], &train[i][1]);
		getchar();
	}
	a1 = train[1][1];
	a2 = a1 - train[2][0] + train[2][1];
	a3 = a2 - train[3][0] + train[3][1];
	if(a1 >= a2 && a1 >= a3)
		printf("%d\n", a1);
	else if(a2 >= a1 && a2 >= a3)
		printf("%d\n", a2);
	else
		printf("%d\n", a3);
	return 0;
}