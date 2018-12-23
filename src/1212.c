#include <stdio.h>
// 8진수 2진수

int output[1200000], s;
void plus(int x);

int main() {
	char c;
	int input[333334], l=0, t;
	c = getchar();
	if(c == 0)
		printf("0\n");
	else {
		for(int i=0; i<1200000; i++)
			output[i] = 0;
		input[l++] = c - '0';
		while((c = getchar()) != '\n')
			input[l++] = c - '0';
		l--;
		for(int i=0, j=l; i<j; i++, j--) {
			t = input[j];
			input[j] = input[i];
			input[i] = t;
		}
		for(int i=0; i<=l; i++) {
			if(input[i] == 7) {
				plus(i*3);
				plus(i*3+1);
				plus(i*3+2);
			}
			if(input[i] == 6) {
				plus(i*3+1);
				plus(i*3+2);
			}
			if(input[i] == 5) {
				plus(i*3);
				plus(i*3+2);
			}
			if(input[i] == 4) {
				plus(i*3+2);
			}
			if(input[i] == 3) {
				plus(i*3);
				plus(i*3+1);
			}
			if(input[i] == 2) {
				plus(i*3+1);
			}
			if(input[i] == 1) {
				plus(i*3);
			}
		}
		for(int i=s; i>=0; i--)
			printf("%d", output[i]);
		printf("\n");
	}
	return 0;
}

void plus(int x) {
	if(output[x] == 0) {
		output[x] = 1;
		s = x;
		return;
	}
	else {
		output[x] = 0;
		plus(x+1);
		return;
	}
}