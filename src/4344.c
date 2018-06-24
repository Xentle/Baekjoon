#include <stdio.h>

int main() {
	float c, n, s[1000], mean, p;
	scanf("%f", &c);
	getchar();
	for(int i=0; i<c; i++) {
		mean=0, p=0;
		scanf("%f", &n);
		getchar();
		for(int i=0; i<n; i++) {
			scanf("%f", &s[i]);
			getchar();
		}
		for(int i=0; i<n; i++)
			mean+=s[i];
		mean=mean/n;
		for(int i=0; i<n; i++)
			if(s[i]>mean)
				p++;
		p=p/n*100;
		printf("%.3f%\n", p);
	}
	return 0;
}