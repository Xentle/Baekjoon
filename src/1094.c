#include <stdio.h>

int main() {
	int length, ans=0, temp;
	scanf("%d", &length);
	getchar();
	while(length > 0) {
		temp=1;
		while(temp <= length)
			temp *= 2;
		temp /=2;
		length -= temp;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}