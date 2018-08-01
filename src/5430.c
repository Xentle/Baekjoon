#include <stdio.h>

int main() {
	int t, n, x[100000], temp, index, front, back, sw, size, print;
	char f[100100], c;
	scanf("%d", &t);
	getchar();
	for(int i=0; i<t; i++) {
		scanf("%s", f);
		getchar();
		scanf("%d", &n);
		getchar();
		getchar();
		index = 0, temp = 0;
		while(1) {
			if(index==n)
				break;
			c=getchar();
			if(c == ',' || c == ']') {
				x[index++] = temp;
				temp = 0;
			}
			else {
				temp *= 10;
				temp += c-48;
			}
		}
		getchar();
		front = 0, back = n-1, sw = 0, size = n, print = n;
		for(int i=0; f[i] != 0; i++) {
			if(f[i] == 'R')
				sw = 1-sw;
			if(f[i] == 'D') {
				if(size == 0) {
					print = -1;
					break;
				}
				else {
					if(sw == 0) {
						size--;
						front++;
						print--;
					}
					else {
						size--;
						back--;
						print--;
					}
				}
			}
		}
		if(print == -1)
			printf("error\n");
		else {
			if(print == 0) {
				printf("[]\n");
			}
			else {
				if(sw == 0) {
					printf("[%d", x[front++]);
					for(int i=front; i<=back; i++)
						printf(",%d", x[front++]);
					printf("]\n");
				}
				else {
					printf("[%d", x[back--]);
					for(int i=back; i>=front; i--)
						printf(",%d", x[back--]);
					printf("]\n");
				}
			}
		}
	}
	return 0;
}