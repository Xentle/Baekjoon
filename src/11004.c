#include <stdio.h>

int arr[500001], temp[500001];
void mergesort(int s, int e);
void merge(int s1, int e1, int s2, int e2);

int main() {
	int n, ans;
	scanf("%d %d", &n, &ans);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	mergesort(0, n-1);
	printf("%d\n", arr[ans-1]);
	return 0;
}

void mergesort(int s, int e) {
	if(s == e)
		return;
	mergesort(s, (s+e)/2);
	mergesort((s+e)/2 + 1, e);
	merge(s, (s+e)/2, (s+e)/2 + 1, e);
	return;
}

void merge(int s1, int e1, int s2, int e2) {
	int fs = s1, fe = e1, bs = s2, be = e2, i = s1;
	while(fs <= fe && bs <= be) {
		if(arr[fs] < arr[bs]) {
			temp[i] = arr[fs];
			i++;
			fs++;
		}
		else {
			temp[i] = arr[bs];
			i++;
			bs++;
		}
	}
	if(fs > fe) {
		while(bs <= be) {
			temp[i] = arr[bs];
			i++;
			bs++;
		}
	}
	else {
		while(fs <= fe) {
			temp[i] = arr[fs];
			i++;
			fs++;
		}
	}
	for(int j=s1; j<=e2; j++) {
		arr[j] = temp[j];
	}
	return;
}