#include <stdio.h>

int main() {
	double n;
	double a[1000], b, max=0;
	char c;
	scanf("%lf", &n);
	getchar();
	for(int i=0; i<n; i++) {
		b=0;
		while(1) {
			c=getchar();
			if(c==' ' || c=='\n')
				break;
			b*=10;
			b+=c-48;
		}
		a[i]=b;
	}
	for(int i=0; i<n; i++) {
		if(a[i]>=max)
			max=a[i];
	}
	for(int i=0; i<n; i++) {
		a[i]=a[i]/max*100;
	}
	b=0;
	for(int i=0; i<n; i++) {
		b+=a[i];
	}
	b=b/n;
	printf("%.2f\n", b);
	return 0;
}