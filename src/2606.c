#include <stdio.h>

int main() {
	int com, node, arr[10000][2], visit[101], stack[300], size=1, check, ans=0;
	scanf("%d", &com);
	getchar();
	scanf("%d", &node);
	getchar();
	for(int i=0; i<2*node; i+=2) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		getchar();
		arr[i+1][0] = arr[i][1];
		arr[i+1][1] = arr[i][0];
	}
	for(int i=0; i<101; i++)
		visit[i] = 0;
	stack[1] = 1;
	visit[1] = 1;
	while(size > 0) {
		check = 0;
		for(int i=0; i<2*node; i++) {
			if(arr[i][0] == stack[size] && visit[arr[i][1]] != 1) {
				size++;
				stack[size] = arr[i][1];
				visit[arr[i][1]] = 1;
				check = 1;
				break;
			}
		}
		if(check == 0)
			size--;
	}
	for(int i=0; i<101; i++) {
		if(visit[i] == 1)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}