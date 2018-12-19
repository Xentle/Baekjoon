#include <stdio.h>

int main() {
	int ans[8], arr[8], n=0, p, t;
	char c;
	for(int i=0; i<8; i++)
		ans[i] = -1;
	while((c = getchar()) != '\n') {
		arr[n++] = c - '0';
	}
	n--;
	if(n == 0) {
		if(arr[0] >= 7)
			printf("7\n");
		else
			printf("4\n");
	}
	else {
		if(arr[0] < 4) {
			printf("%d\n", arr[n]);
			for(int i=0; i<n; i++)
				printf("7");
			printf("\n");
		}
		else if(arr[0] > 7) {
			for(int i=0; i<=n; i++)
				printf("7");
			printf("\n");
		}
		else if(arr[0] > 4 && arr[0] < 7) {
			printf("4");
			for(int i=0; i<n; i++)
				printf("7");
			printf("\n");
		}
		else {
			if(arr[0] == 7) {
				ans[0] = 7;
				for(int i=1; i<=n; i++) {
					if(arr[i] < 4) {
						t = i-1;
						while(ans[t] == 4 && t > 0)
							t--;				
						ans[t++] = 4;
						while(t <= n)
							ans[t++] = 7;
						break;
					}
					else if(arr[i] > 4 && arr[i] < 7) {
						ans[i++] = 4;
						while(i <= n)
							ans[i++] = 7;
						break;
					}
					else if(arr[i] > 7) {
						while(i <= n)
							ans[i++] = 7;
						break;
					}
					else if(arr[i] == 4)
						ans[i] = 4;
					else
						ans[i] = 7;
				}	
			}
			else {
				ans[0] = 4;
				for(int i=1; i<=n; i++) {
					if(arr[i] < 4) {
						t = i-1;
						while(ans[t] == 4 && t > 0)
							t--;
						if(t == 0) {
							n--;
							for(int i=0; i<=n; i++)
								ans[i] = 7;
							break;
						}
						else {
							ans[t++] = 4;
							while(t <= n)
								ans[t++] = 7;
						}
						break;
					}
					else if(arr[i] > 4 && arr[i] < 7) {
						ans[i++] = 4;
						while(i <= n)
							ans[i++] = 7;
						break;
					}
					else if(arr[i] > 7) {
						while(i <= n)
							ans[i++] = 7;
						break;
					}
					else if(arr[i] == 4)
						ans[i] = 4;
					else
						ans[i] = 7;
				}
			}
			for(int i=0; i<=n; i++)
				printf("%d", ans[i]);
			printf("\n");
		}
	}
	return 0;
}