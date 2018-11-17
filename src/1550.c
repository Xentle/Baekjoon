#include <stdio.h>

int main() {
	char n[8];
	int ans=0;
	scanf("%s", n);
	for(int i=0; n[i] != 0; i++) {
		ans *= 16;
		if(n[i] >= 'A' && n[i] <= 'F')
			ans += n[i] - 'A' + 10;
		else
			ans += n[i] - '0';
	}
	printf("%d\n", ans);
	return 0;
}