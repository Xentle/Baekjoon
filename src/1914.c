#include <stdio.h>

void printPath(int x, int s, int e);

int main() {
	int n, times[50], l;
	for(int i=0; i<50; i++)
		times[i] = 0;
	times[0] = 1;
	scanf("%d", &n);
	for(int i=1; i<n; i++) {
		for(int i=0; i<50; i++)
			times[i] *= 2;
		times[0]++;
		for(int i=0; i<50; i++) {
			if(times[i] != 0)
				l = i;
			if(times[i] >= 10) {
				times[i+1]++;
				times[i] %= 10;
			}
		}
	}
	for(int i=l; i>=0; i--)
		printf("%d", times[i]);
	printf("\n");
	if(n <= 20)
		printPath(n, 1, 3);
	return 0;
}

void printPath(int x, int s, int e) {
	if(x == 1) {
		printf("%d %d\n", s, e);
		return;
	}
	if(s == 1 && e == 2) {
		printPath(x-1, 1, 3);
		printPath(1, 1, 2);
		printPath(x-1, 3, 2);
	}
	if(s == 1 && e == 3) {
		printPath(x-1, 1, 2);
		printPath(1, 1, 3);
		printPath(x-1, 2, 3);
	}
	if(s == 2 && e == 3) {
		printPath(x-1, 2, 1);
		printPath(1, 2, 3);
		printPath(x-1, 1, 3);
	}
	if(s == 2 && e == 1) {
		printPath(x-1, 2, 3);
		printPath(1, 2, 1);
		printPath(x-1, 3, 1);
	}
	if(s == 3 && e == 2) {
		printPath(x-1, 3, 1);
		printPath(1, 3, 2);
		printPath(x-1, 1, 2);
	}
	if(s == 3 && e == 1) {
		printPath(x-1, 3, 2);
		printPath(1, 3, 1);
		printPath(x-1, 2, 1);
	}
	return;
}
//   n(1~3) = n-1(1~2) + 1(1~3) + n-1(2~3)
// n-1(1~2) = n-2(1~3) + 1(1~2) + n-2(3~2)
// n-1(2~3) = n-2(2~1) + 1(2~3) + n-2(1~3)