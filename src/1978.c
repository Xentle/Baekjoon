#include <stdio.h>
#include <math.h>

int main() {
	int N, lim, ans=0;
	double n[100];
	scanf("%d", &N);
	getchar();
	for(int i=0; i<N; i++) {
		scanf("%lf", &n[i]);
		getchar();
	}
	for(int i=0; i<N; i++) {
		lim=(int)sqrt(n[i]);
		ans++;
		if(n[i]==1)
			ans--;
		else if(n[i]==2) {}
		else {
			for(int j=2; j<=lim; j++) {
				if(((int)n[i])%j==0) {
					ans--;
					break;
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}