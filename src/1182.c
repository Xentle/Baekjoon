#include <stdio.h>

int ans=0, num[21], s, n;
void sum1(int i, int sum);
void mergesort(int start, int end);
void sum0(int i, int sum);
void merge(int start, int end);

int main() {
	scanf("%d %d", &n, &s);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &num[i]);
		getchar();
	}
	mergesort(1, n);
	if(n == 1) {
		if(num[1] == s)
			ans++;
		printf("%d\n", ans);
	}
	else {
		sum1(2, num[1]);
		sum0(2, 0);
		if(s == 0)
			ans--;
		printf("%d\n", ans);
	}
	return 0;
}

void sum1(int i, int sum) {
	if(i == n) {
		if((sum + num[n]) == s)
			ans++;
		if(sum == s)
			ans++;
		printf("sum1 %d %d %d\n", i, sum, ans);
		return;
	}
	sum1(i+1, sum+num[i]);
	sum0(i+1, sum);
	return;
}

void sum0(int i, int sum) {
	if(i == n) {
		if((sum + num[n]) == s)
			ans++;
		if(sum == s)
			ans++;
		printf("sum1 %d %d %d\n", i, sum, ans);
		return;
	}
	sum1(i+1, sum+num[i]);
	sum0(i+1, sum);
	return;
}

void mergesort(int start, int end) {
	if(start == end)
		return;
	mergesort(start, (start+end)/2);
	mergesort((start+end)/2+1, end);
	merge(start, end);
	return;
}

void merge(int start, int end) {
	int s1 = start, e1 = (start+end)/2, s2 = (start+end)/2+1, e2 = end, i=start;
	int temp[21];
	while(s1<=e1 && s2<=e2) {
		if(num[s1] < num[s2])
			temp[i++] = num[s1++];
		else
			temp[i++] = num[s2++];
	}
	if(s1>e1)
		while(s2<=e2)
			temp[i++] = num[s2++];
	else
		while(s1<=e1)
			temp[i++] = num[s1++];
	for(int j=start; j<=end; j++)
		num[j] = temp[j];
	return;
}