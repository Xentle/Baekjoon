#include <stdio.h>

int main() {
	int n, a, b;
	int p[15][15];
	for(int i=0; i<15; i++)
		for(int j=0; j<15; j++)
			p[i][j]=0;
	for(int i=1; i<15; i++)
		p[0][i]=i;
	for(int i=1; i<15; i++)
		p[i][1]=1;
	for(int i=1; i<15; i++)
		for(int j=2; j<15; j++)
			for(int k=j; k>0; k--)
				p[i][j]+=p[i-1][k];
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d", &a);
		getchar();
		scanf("%d", &b);
		getchar();
		printf("%d\n", p[a][b]);
	}
	
	return 0;
}