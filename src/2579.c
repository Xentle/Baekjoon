#include <stdio.h>

int max(int a1, int a2);

int main() {
	int stair[301], n, ans, m[400][5];
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &stair[i]);
		getchar();
	}
	if(n == 1)
		printf("%d\n", stair[1]);
	else if(n == 2)
		printf("%d\n", stair[1]+stair[2]);
	else if(n == 3)
		if(stair[1] > stair[2])
			printf("%d\n", stair[1]+stair[3]);
		else
			printf("%d\n", stair[2]+stair[3]);
	else {
		m[4][0]=stair[2]+stair[4];
		m[4][1]=stair[2]+stair[3];
		m[4][2]=stair[1]+stair[3];
		m[4][3]=stair[1]+stair[2]+stair[4];
		m[4][4]=stair[1]+stair[3]+stair[4];
		for(int i=5; i<=n-1; i++) {
			m[i][0]=m[i-1][2]+stair[i];
			m[i][1]=m[i-1][4];
			m[i][2]=max(m[i-1][0], m[i-1][3]);
			m[i][3]=m[i-1][1]+stair[i];
			m[i][4]=m[i][2]+stair[i];
		}
		ans = m[n-1][0];
		for(int i=1; i<=3; i++)
			if(m[n-1][i] > ans)
				ans = m[n-1][i];
		printf("%d\n", ans+stair[n]);
	}
	return 0;
}

int max(int a1, int a2) {
	if(a1 > a2)
		return a1;
	else
		return a2;
}