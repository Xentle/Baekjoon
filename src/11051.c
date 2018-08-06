#include <stdio.h>

int arr[1001][501];
int bin(int n, int r);

int main() {
	int n, k, ans;
	for(int i=0; i<1001; i++)
		for(int j=0; j<501; j++)
			arr[i][j] = -1;	
	scanf("%d %d", &n, &k);
	if(k>n/2)
		k = n-k;
	if(k == 0)
		printf("1\n");
	else {
		ans = bin(n, k);
		printf("%d\n", ans);
	}
	return 0;
}

int bin(int n, int r) {
	if(r == 0 || r == n)
		return 1;
	if(arr[n][r] != -1)
		return arr[n][r];
	return arr[n][r] = (bin(n-1, r-1) + bin(n-1, r)) % 10007;
}
