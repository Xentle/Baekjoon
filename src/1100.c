#include <stdio.h>

int main() {
	int ans=0;
	char c;
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if((c = getchar()) == 'F' && (i-j) % 2 == 0)
				ans++;
		}
		getchar();
	}
	printf("%d\n", ans);
	return 0;
}