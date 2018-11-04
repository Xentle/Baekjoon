#include <stdio.h>

int main() {
	int k, sel[14];
	while(1) {
		scanf("%d", &k);
		getchar();
		if(k == 0)
			break;
		for(int i=1; i<=k; i++) {
			scanf("%d", &sel[i]);
			getchar();
		}
		for(int a=1; a<=k-5; a++) {
			for(int b=a+1; b<=k-4; b++) {
				for(int c=b+1; c<=k-3; c++) {
					for(int d=c+1; d<=k-2; d++) {
						for(int e=d+1; e<=k-1; e++) {
							for(int f=e+1; f<=k; f++) {
								printf("%d %d %d %d %d %d\n", sel[a], sel[b], sel[c], sel[d], sel[e], sel[f]);
							}
						}
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}
/*
12C6 11 3 4 7 / 1
*/