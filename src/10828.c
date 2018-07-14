#include <stdio.h>

int main() {
	int n, arr[10000], size=0, e;
	char line[20];
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		e=0;
		scanf("%[^\n]s", line);
		getchar();
		if(line[0]=='p') {
			if(line[1]=='u') {
				if(line[5]=='-') {
					for(int i=6; line[i]!=0; i++)
						e=e*10+line[i];
					e=e*(-1);
					arr[size]=e;
					size++;
				}
				else {
					for(int i=5; line[i]!=0; i++)
						e=e*10+(line[i]-48);
					arr[size]=e;
					size++;
				}
			}
			else if(line[1]=='o') {
				if(size==0)
					printf("-1\n");
				else {
					printf("%d\n", arr[size-1]);
					size--;
				}
			}
		}
		else if(line[0]=='s') {
			printf("%d\n", size);
		}
		else if(line[0]=='t') {
			if(size==0)
				printf("-1\n");
			else
				printf("%d\n", arr[size-1]);
		}
		else if(line[0]=='e') {
			if(size==0)
				printf("1\n");
			else
				printf("0\n");
		}
	}
	
}