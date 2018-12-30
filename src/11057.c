#include <stdio.h>

int up[10][1001];
int count(int x, int y);
// 오르막 수

int main() {
	int n, ans=0;
	scanf("%d", &n);
	for(int i=0; i<10; i++)
		for(int j=0; j<1001; j++)
			up[i][j] = -1;
	for(int i=1; i<=1001; i++)
		up[9][i] = 1;
	for(int i=0; i<10; i++)
		up[i][1] = 1;
	for(int i=0; i<10; i++) {
		ans += count(i, n);
		ans %= 10007;
	}
	printf("%d\n", ans);
	return 0;
}

int count(int x, int y) {
	if(up[x][y] != -1)
		return up[x][y];
	up[x][y] = 0;
	for(int i=x; i<10; i++) {
		up[x][y] += count(i, y-1);
		up[x][y] %= 10007;
	}
	return up[x][y];
	
}