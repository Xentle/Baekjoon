#include <stdio.h>

int main() {
	int max=0, new, temp, index;
	for(int i=1; i<=5; i++) {
		new = 0;
		for(int j=0; j<4; j++) {
			scanf("%d", &temp);
			getchar();
			new += temp;
		}
		if(new > max) {
			max = new;
			index = i;
		}
	}
	printf("%d %d\n", index, max);
	return 0;
}