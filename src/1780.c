#include <stdio.h>

int matrix[2187][2187], ans[3];

int main() {
	int n;
	for(int i=0; i<3; i++)
		ans[i] = 0;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			scanf("%d", &matrix[i][j]);
			getchar();
		}
	}
	check(1, 1, n, n);
	for(int i=0; i<3; i++)
		printf("%d\n", ans[i]);
	return 0;
}

void check(int x1, int y1, int x2, int y2) {
	// (x1, y1) = 왼쪽 아래     (x2, y2) = 오른쪽 위
	int d = (x2 - x1 + 1)/3;
	if(x1 == x2 && y1 == y2) {
		ans[matrix[x1][y1]+1]++;
		return;
	}
	if(isSame(x1, y1, x2, y2)) {
		ans[matrix[x1][y1]+1]++;
		return;
	}
	else {
		check(x1,     y1,     x1+d-1,   y1+d-1);
		check(x1+d,   y1,     x1+2*d-1, y1+d-1);
		check(x1+2*d, y1,     x2,       y1+d-1);
		check(x1,     y1+d,   x1+d-1,   y1+2*d-1);
		check(x1+d,   y1+d,   x1+2*d-1, y1+2*d-1);
		check(x1+2*d, y1+d,   x2,       y1+2*d-1);
		check(x1,     y1+2*d, x1+d-1,   y2);
		check(x1+d,   y1+2*d, x1+2*d-1, y2);
		check(x1+2*d, y1+2*d, x2,       y2);
		return;
	}
}
//  XXX
//  XXX
//  XXX

int isSame(int x1, int y1, int x2, int y2) {
	int x = matrix[x1][y1];
	for(int i=x1; i<=x2; i++) {
		for(int j=y1; j<=y2; j++) {
			if(matrix[i][j] != x)
				return 0;
		}
	}
	return 1;
}