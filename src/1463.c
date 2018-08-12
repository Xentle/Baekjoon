#include <stdio.h>

int min3(int a1, int a2, int a3);
int min2(int a1, int a2);

int main() {
	int n, m[1000001]={-1};
	scanf("%d", &n);
	getchar();
	m[1]=0;
	m[2]=m[3]=1;
	for(int i=4; i<=n; i++) {
		if(i % 2 == 0 && i % 3 == 0)
			m[i] = min3(m[i/2], m[i/3], m[i-1])+1;
		else if(i % 2 == 0)
			m[i] = min2(m[i/2], m[i-1])+1;
		else if(i % 3 == 0)
			m[i] = min2(m[i/3], m[i-1])+1;
		else
			m[i] = m[i-1]+1;
	}
	printf("%d\n", m[n]);
	return 0;
}

int min3(int a1, int a2, int a3) {
	if(a1 <= a2 && a1 <= a3)
		return a1;
	else if(a2 <= a3 && a2 <= a1)
		return a2;
	else if(a3 <= a2 && a3 <= a1)
		return a3;
}

int min2(int a1, int a2) {
	if(a1 <= a2)
		return a1;
	else
		return a2;
}