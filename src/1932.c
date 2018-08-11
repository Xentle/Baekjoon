#include <stdio.h>

int main() {
	int m[500][500], input[500][500], n, ans;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		for(int j=0; j<=i; j++) {
			scanf("%d", &input[i][j]);
			getchar();
		}
	}
	m[0][0] = input[0][0];
	for(int i=1; i<n; i++) {
		m[i][0] = input[i][0] + m[i-1][0];
		m[i][i] = input[i][i] + m[i-1][i-1];
		for(int j=1; j<i; j++) {
			if(m[i-1][j-1] < m[i-1][j])
				m[i][j] = m[i-1][j] + input[i][j];
			else
				m[i][j] = m[i-1][j-1] + input[i][j];
		}
	}
	ans = m[n-1][0];
	for(int i=1; i<n; i++)
		if(m[n-1][i] > ans)
			ans = m[n-1][i];
	printf("%d\n", ans);
	return 0;
}