#include <stdio.h>

int main() {
	int n, c[1000], temp, length;
	scanf("%d", &n);
	getchar();
	length=n;
	for(int i=0; i<length; i++) {
		scanf("%d", &temp);
		getchar();
		c[i]=temp;
	}
	for(int i=0; i<length-1; i++, n--)
		for(int j=0; j<n-1; j++)
			if(c[j]>c[j+1]) {
				temp=c[j+1];
				c[j+1]=c[j];
				c[j]=temp;
			}
	for(int i=0; i<length; i++)
		printf("%d\n", c[i]);
	return 0;
}