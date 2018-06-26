#include <stdio.h>

int main() {
	int s[8], sw=1;
	for(int i=0; i<8; i++) {
		scanf("%d", &s[i]);
	}
	if(s[0]==1) {
		for(int i=1; i<8; i++) {
			if(s[i]!=i+1) {
				sw=0;
				printf("mixed\n");
				break;
			}
		}
		if(sw==1)
			printf("ascending\n");
	}
	else if(s[0]==8) {
		for(int i=1; i<8; i++) {
			if(s[i]!=8-i) {
				sw=0;
				printf("mixed\n");
				break;
			}
		}
		if(sw==1)
			printf("descending\n");
	}
	else
		printf("mixed\n");
	return 0;
}