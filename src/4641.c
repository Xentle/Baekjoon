#include <stdio.h>

int main() {
	int n[20];
	while(1) {
		int size, ans=0;
		for(int i=1; i<20; i++) {
			scanf("%d", &n[i]);
			getchar();
			if(n[i] == 0 || n[i] == -1) {
				size = i-1;
				break;
			}
		}
		if(n[1] == -1)
			break;
		for(int i=1; i<=size; i++) {
			for(int j=1; j<=size; j++)
				if(n[j] == 2*n[i])
					ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}