#include <stdio.h>
#include <math.h>

int main() {
	int a, b, root, sum=0, min=0;
	scanf("%d", &a);
	getchar();
	scanf("%d", &b);
	getchar();
	for(int i=b; i>=a; i--) {
		root = sqrt(i);
		if(root * root == i) {
			sum += i;
			min = i;
		}
	}
	if(sum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);
	return 0;
}