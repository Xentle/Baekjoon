#include <stdio.h>

int main() {
	int N, n[9], length=0, temp;
	scanf("%d", &N);
	for(int i=0; N>0; N/=10, i++, length++) {
		n[i]=N%10;
	}
	for(int i=0; i<length-1; i++)
		for(int j=0; j<length-(i+1); j++)
			if(n[j]<n[j+1]) {
				temp=n[j+1];
				n[j+1]=n[j];
				n[j]=temp;
			}
	for(int i=0; i<length; i++)
		printf("%d", n[i]);
	printf("\n");
	return 0;
}