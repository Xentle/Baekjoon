#include <stdio.h>

int main() {
	int a[10001], n, t=0, size=0, front=0, back=-1;
	char l[20];
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++, t=0) {
		scanf("%s", l);
		getchar();
		if(l[0]=='p') {
			if(l[1]=='u') {
				if(l[5]=='-') {
					for(int j=6; l[j]!=0; j++) {
						t*=10;
						t+=(l[j]-48);
					}
					t*=(-1);
					a[++back]=t;
					size++;
				}
				else {
					for(int j=5; l[j]!=0; j++) {
						t*=10;
						t+=(l[j]-48);
					}
					a[++back]=t;
					size++;
				}
			}
			else if(l[1]=='o') {
				if(size==0)
					printf("-1\n");
				else {
					printf("%d\n", a[front++]);
					size--;
				}
			}
		}
		else if(l[0]=='s') {
			printf("%d\n", size);
		}
		else if(l[0]=='e') {
			if(size==0)
				printf("1\n");
			else
				printf("0\n");
		}
		else if(l[0]=='f') {
			if(size==0)
				printf("-1\n");
			else
				printf("%d\n", a[front]);
		}
		else if(l[0]=='b') {
			if(size==0)
				printf("-1\n");
			else
				printf("%d\n", a[back]);
		}
	}
	return 0;
}