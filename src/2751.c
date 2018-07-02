#include <stdio.h>

void merge_sort(int num[],int start, int end); 
void merge(int num[], int start, int mid, int end);

int main() {
	int N, n[1000000], temp, length;
	scanf("%d", &N);
	getchar();
	length=N;
	for(int i=0; i<N; i++) {
		scanf("%d", &temp);
		getchar();
		n[i]=temp;
	}
	merge_sort(n, 0, length-1);
	for(int i=0; i<length; i++)
		printf("%d\n", n[i]);
	return 0;
}

void merge_sort(int num[], int start, int end) {
	int median=(start+end)/2;
	if(start<end) {
		merge_sort(num, start, median);
		merge_sort(num, median+1, end);
		merge(num, start, median, end);
	}
}

void merge(int num[], int start, int median, int end) {
	int i, j, k, m, n;
	int temp[1000000];
	i=start;
	j=median+1;
	k=start;
	while(i<=median && j<=end) {
		temp[k++] = (num[i] > num [j]) ? num [j++] : num [i++];
	}
	m = (i > median) ? j : i;
    n = (i > median) ? end : median;
	for (; m<=n; m++){ // 앞에서 구한 m, n으로 배열에 속하지 못한 원소들을 채워넣음
        temp[k++] = num[m];
    }
	for(i=start; i<=end; i++) {
		num[i]=temp[i];
	}
}