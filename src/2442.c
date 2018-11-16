#include <stdio.h>

int main() {
	char p[102][201];
	int n;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++)
			p[i][j] = ' ';
		for(int j=n-i+1; j<=n+i-1; j++)
			p[i][j] = '*';
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n+i-1; j++)
			printf("%c", p[i][j]);
		printf("\n");
	}
	return 0;
}