#include <stdio.h>

int m[101][10], x=1000000000;
int dp(int target, int index);

int main() {
	int target, ans=0;
	scanf("%d", &target);
	getchar();
	for(int i=0; i<101; i++)
		for(int j=0; j<10; j++)
			m[i][j] = -1;
	m[1][0]=0;
	for(int i=1; i<=9; i++)
		m[1][i] = 1;
	for(int i=0; i<10; i++)
		ans = (ans + dp(target, i)) % x;
	printf("%d\n", ans);
	return 0;
}

int dp(int target, int index) {
	if(m[target][index] != -1)
		return m[target][index];
	if(index == 0)
		return m[target][index] = dp(target-1, 1);
	else if(index == 9)
		return m[target][index] = dp(target-1, 8);
	else
		return m[target][index] = (dp(target-1, index+1) + dp(target-1, index-1)) % x;
	return 0;
}