#include <stdio.h>

int n, arr[100001], opt[100001], m_c[100001], m_no[100001];
int contain(int i);
int no_contain(int i);
int max(int a1, int a2);

int main() {
	int ans, sw=0, start, end;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	for(int i=1; i<=n; i++)
		if(arr[i] > 0) {
			sw = 1;
			break;
		}
	if(sw == 0) {
		ans=arr[1];
		for(int i=2; i<=n; i++)
			if(arr[i] >ans)
				ans = arr[i];
		printf("%d\n", ans);
	}
	else {
		start = 1;
		end = n;
		while(arr[start] <= 0)
			start++;
		while(arr[end] <=0)
			end--;
		opt[n = 1] = arr[start++];
		for(int sw=1; start<=end; start++) {
			if(arr[start] * sw > 0)
				opt[n] += arr[start];
			else if(arr[start] == 0) {}
			else {
				opt[++n] = arr[start];
				sw *= -1;
			}
		}
		if(n == 1)
			printf("%d\n", opt[1]);
		else {
			for(int i=1; i<=100001; i++)
				m_c[i] = m_no[i] = 1000000000;
			m_c[1] = opt[1];
			m_no[3] = opt[1];
			ans = max(contain(n), no_contain(n));
			printf("%d\n", ans);
		}
	}
	
	return 0;
}

int contain(int i) {
	if(m_c[i] != 1000000000)
		return m_c[i];
	else
		return m_c[i] = max(opt[i], opt[i] + opt[i-1] + contain(i-2));
}

int no_contain(int i) {
	if(m_no[i] != 1000000000)
		return m_no[i];
	else
		return m_no[i] = max(contain(i-2), no_contain(i-2));
	
}

int max(int a1, int a2) {
	if(a1 >= a2)
		return a1;
	else
		return a2;
}