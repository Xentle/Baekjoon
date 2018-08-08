#include <stdio.h>

int main() {
	int arr[101]={0}, n, m, ans[35]={0};
	scanf("%d %d", &n, &m);
	getchar();
	if(m>n/2)
		m = n-m;
	if(m == 0)
		printf("1\n");
	else {
		for(int i=n; i>(n-m); i--) {
			int j=2, temp=i;
			while(1) {
				if(temp == 1)
					break;
				if(temp % j == 0) {
					arr[j]++;
					temp /= j;
					j = 2;
				}
				else
					j++;
			}
		}
		for(int i=1; i<=m; i++) {
			int j=2, temp=i;
			while(1) {
				if(temp == 1)
					break;
				if(temp % j == 0) {
					arr[j]--;
					temp /= j;
					j = 2;
				}
				else
					j++;
			}
		}
		ans[0]=1;
		for(int i=2, temp=1; i<=100; i++, temp=1) {
			while(arr[i]>0) {
				temp *= i;
				arr[i]--;
			}
			if(temp != 1) {
				for(int i=0; i<=30; i++)
					ans[i] *= temp;
				for(int i=0; i<34; i++) {
					ans[i+1] += ans[i]/10;
					ans[i] %= 10;
				}
			}
		}
		for(int i=34, check=0; i>=0; i--) {
			if(ans[i]!=0)
				check=1;
			if(check==1)
				printf("%d", ans[i]);
		}
		printf("\n");
	}
	return 0;
}