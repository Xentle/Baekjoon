#include <stdio.h>
#include <string.h>

void merge_sort(char arr[][51], int start, int end);
void merge(char arr[][51], int start, int med, int end);

int main() {
	int N, n[51]={0};
	char arr[20000][51], ans[20000][51];
	scanf("%d", &N);
	getchar();
	for(int i=0; i<N; i++) {
		scanf("%s", arr[i]);
		getchar();
	}
	for(int i=0; i<N; i++) {
		n[strlen(arr[i])]++;
	}
	for(int i=1; i<51; i++) {
		n[i]+=n[i-1];
	}
	for(int i=N-1; i>=0; i--) {
		strcpy(ans[n[strlen(arr[i])]-1], arr[i]);
		n[strlen(arr[i])]--;
	}
	for(int i=0, j=0; i<N; i=j+1) {
		j=i;
		while(strlen(ans[j+1])==strlen(ans[i]) && j+1<N)
			j++;
		merge_sort(ans, i, j);
	}
	for(int i=0; i<N; i++) {
		if(strcmp(ans[i],ans[i-1])==0) {}
		else
			printf("%s\n", ans[i]);
	}
	return 0;
}

void merge_sort(char arr[][51], int start, int end) {
	int med=(start+end)/2;
	if(start<end) {
		merge_sort(arr, start, med);
		merge_sort(arr, med+1, end);
		merge(arr, start, med, end);
	}
}

void merge(char arr[][51], int start, int med, int end) {
	char test[20000][51];
	int index=start;
	int arr1=start;
	int arr1_end=med;
	int arr2=med+1;
	int arr2_end=end;
	while(arr1<=arr1_end && arr2<=arr2_end) {
		if(strcmp(arr[arr1],arr[arr2])<0) {
			strcpy(test[index],arr[arr1]);
			index++, arr1++;
		}
		else {
			strcpy(test[index],arr[arr2]);
			index++, arr2++;
		}
	}
	if(arr1>arr1_end)
		while(arr2<=arr2_end) {
			strcpy(test[index],arr[arr2]);
			index++, arr2++;
		}
	else
		while(arr1<=arr1_end) {
			strcpy(test[index],arr[arr1]);
			index++, arr1++;
		}
	for(int i=start; i<=end; i++)
		strcpy(arr[i],test[i]);
}