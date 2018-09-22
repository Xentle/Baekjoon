#include <stdio.h>

int main() {
	int temp;
	for(int i=0, ans=0; i<3; i++, ans=0) {
		for(int j=0; j<4; j++) {
			scanf("%d", &temp);
			getchar();
			if(temp == 0)
				ans++;
		}
		if(ans == 0)
			printf("E\n");
		else if(ans == 1)
			printf("A\n");
		else if(ans == 2)
			printf("B\n");
		else if(ans == 3)
			printf("C\n");
		else if(ans == 4)
			printf("D\n");
	}
	return 0;
}