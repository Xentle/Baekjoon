#include <stdio.h>
#include <math.h>

int main() {
	int N, med, fre[500000], fre_n=0, max, min, range, cum=0;
	double avg=0;
	int n[8001], temp;
	scanf("%d", &N);
	getchar();
	for(int i=0; i<8001; i++)
		n[i]=0;
	for(int i=0; i<N; i++) {
		scanf("%d", &temp);
		getchar();
		n[temp+4000]++;
	}
	
	for(int i=0; i<8001; i++)
		avg+=n[i]*(i-4000);
	avg/=N;
	avg=round(avg);
	
	for(int i=0; i<8001; i++) {
		cum+=n[i];
		if(cum>N/2) {
			med=i-4000;
			break;
		}
	}
	
	for(int i=0, j=0; i<8001; i++) {
		if(n[i]>fre_n) {
			fre[0]=i-4000;
			fre[1]=i-4000;
			fre_n=n[i];
			j=0;
		}
		else if(n[i]==fre_n) {
			j++;
			fre[j]=i-4000;
		}
	}
	
	for(int i=0; i<8001; i++)
		if(n[i]!=0) {
			min=i;
			break;
		}
	for(int i=8000; i>=0; i--)
		if(n[i]!=0) {
			max=i;
			break;
		}
	range=max-min;
	
	printf("%.0f\n", avg);
	printf("%d\n", med);
	printf("%d\n", fre[1]);
	printf("%d\n", range);
	return 0;
}