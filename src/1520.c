#include <stdio.h>

int w, h, stair[501][501], m[502][502];
int dp(int h, int w);

int main() {
	int ans;
	scanf("%d %d", &h, &w);
	for(int i=1; i<=h; i++)
		for(int j=1; j<=w; j++) {
			scanf("%d", &stair[i][j]);
			getchar();
			m[i][j] = -1;
		}
	m[1][1] = 1;
	for(int i=0; i<=w+1; i++)
		stair[0][i]=-1;
	for(int i=0; i<=h+1; i++)
		stair[i][0]=-1;
	for(int i=0; i<=h+1; i++)
		stair[i][w+1]=-1;
	for(int i=0; i<=w+1; i++)
		stair[h+1][i]=-1;
	if(w == 1 && h == 1)
		printf("1\n");
	else {
		ans = dp(h, w);
		printf("%d\n", ans);
	}
	return 0;
}

int dp(int h, int w) {
	if(m[h][w] != -1)
		return m[h][w];
	else {
		m[h][w]=0;
		if(stair[h-1][w] > stair[h][w])
			m[h][w] += dp(h-1, w);
		if(stair[h+1][w] > stair[h][w])
			m[h][w] += dp(h+1, w);
		if(stair[h][w-1] > stair[h][w])
			m[h][w] += dp(h, w-1);
		if(stair[h][w+1] > stair[h][w])
			m[h][w] += dp(h, w+1);
		return m[h][w];
	}
	
}