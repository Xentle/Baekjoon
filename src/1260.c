#include <stdio.h>

void DFS(int i);
void BFS(int i);

int n, v, m;
int check[1001]={0};
int g[1001][1001];

int main() {
	int n1, n2;
	scanf("%d %d %d", &n, &m, &v);
	getchar();
	for(int i=0; i<m; i++) {
		scanf("%d %d", &n1, &n2);
		getchar();
		g[n1][n2]=g[n2][n1]=1;
	}
	DFS(v);
	printf("\n");
	for(int i=0; i<1001; i++)
		check[i]=0;
	BFS(v);
	printf("\n");
	return 0;
}

void DFS(int v) {
	check[v]=1;
	printf("%d ", v);
	for(int j=1; j<=n; j++) {
		if(g[v][j]==1 && check[j]!=1)
			DFS(j);
	}
}

void BFS(int v) {
	int front=0, back=0, temp=v, arr[2000]={0}, size=1;
	check[temp]=1;
	arr[front]=temp;
	printf("%d ", v);
	while(front<=back) {
		temp=arr[front++];
		for(int j=1; j<=n; j++) {
			if(g[temp][j]==1 && check[j]!=1) {
				arr[++back]=j;
				check[j]=1;
				printf("%d ", j);
				size++;
			}
		}
	}
}