#include <stdio.h>
// 패셔니스타

int m[201][201], n, c[201][3];
void dp(int x);
int cal(int x, int y);

int main() {
	int d, t[201], ans=-1;
	scanf("%d %d", &d, &n);
	getchar();
	for(int i=1; i<=d; i++) {
		scanf("%d", &t[i]);
		getchar();
	} // 최고기온
	for(int i=1; i<=n; i++) {
		scanf("%d %d %d", &c[i][0], &c[i][1], &c[i][2]);
		getchar();
	} // 0:최저기온  1:최고기온  2:화려함
	for(int i=1; i<=d; i++) {
		for(int j=1; j<=n; j++) {
			if(t[i] >= c[j][0] && t[i] <= c[j][1])
				m[i][j] = 0;
			else
				m[i][j] = -1;
		}
	}
	dp(d-1);
	for(int i=1; i<=n; i++)
		if(m[1][i] > ans)
			ans = m[1][i];
	printf("%d\n", ans);
}

void dp(int x) {
	int max, temp;
	if(x == 0)
		return;
	for(int i=1; i<=n; i++) {
		if(m[x][i] != -1) {
			max = -1;
			for(int j=1; j<=n; j++) {
				if(m[x+1][j] != -1) {
					temp = cal(i, j);
					if(m[x+1][j] + temp > max)
						max = m[x+1][j] + temp;
				}
			}
			m[x][i] = max;
		}
	}
	dp(x-1);
	return;
}

int cal(int x, int y) {
	if(c[y][2] > c[x][2])
		return c[y][2] - c[x][2];
	else
		return c[x][2] - c[y][2];
}