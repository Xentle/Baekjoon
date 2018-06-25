#include <stdio.h>

int main() {
	int a[12000]={0}, th, h, t, o;
	a[1]=0;
	for(int i=1; i<=10000; i++) {
		th=i/1000;
		h=(i/100)%10;
		t=(i/10)%10;
		o=i%10;
		a[th+h+t+o+i]=1;
		if(a[i]==0)
			printf("%d\n", i);
	}
	return 0;
}