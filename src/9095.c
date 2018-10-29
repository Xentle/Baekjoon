#include <stdio.h>

int main() {
	int rep, n, ans, arr[4], temp;
	scanf("%d", &rep);
	getchar();
	for(int i=0; i<rep; i++) {
		scanf("%d", &n);
		getchar();
		ans = 0;
		arr[3] = 0;
		for(int i=0; i<=n; i+=3, arr[3]++) {
			arr[2] = arr[1] = 0;
			for(int j=n-i; j>=0; j-=2, arr[2]++) {
				arr[1] = j;
				temp = arr[1] + arr[2] + arr[3];
				for(int i=temp-1; i>1; i--)
					temp *= i;
				for(int i=arr[1]; i>1; i--)
					temp /= i;
				for(int i=arr[2]; i>1; i--)
					temp /= i;
				for(int i=arr[3]; i>1; i--)
					temp /= i;
				ans += temp;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}