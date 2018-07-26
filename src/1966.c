#include <stdio.h>

int sort[100];
int arr[6000][2];

void Mergesort(int *sort, int start, int end);
void Merge(int *sort, int start1, int end1, int start2, int end2);
	
int main() {
	int test, target, ans, isOverlap, n;
	scanf("%d", &test);
	getchar();
	for(int i=0; i<test; i++) {
		ans=1;
		isOverlap=0;
		scanf("%d %d", &n, &target);
		getchar();
		for(int j=0; j<n; j++) {
			scanf("%d", &sort[j]);
			getchar();
		}
		for(int j=0; j<n; j++) {
			arr[j][0]=sort[j];
			arr[j][1]=0;
		}
		arr[target][1]=1;
		for(int j=0; j<n; j++)
			if(sort[target]==sort[j] && j!=target) {
				isOverlap=1;
				break;
			}
		if(isOverlap) {
			Mergesort(sort, 0, n-1);
			int front=0, back_q=n-1, back_s=n-1;
			while(sort[back_s]!=arr[target][0] || arr[front][1]!=1) {
				if(arr[front][0]==sort[back_s]) {
					front++;
					ans++;
					back_s--;
				}
				else {
					back_q++;
					arr[back_q][0]=arr[front][0];
					arr[back_q][1]=arr[front][1];
					front++;
				}
			}
			printf("%d\n", ans);
		}
		else {
			for(int j=0; j<n; j++)
				if(sort[j]>sort[target])
					ans++;
			printf("%d\n", ans);
		}
	}
	return 0;
}

void Mergesort(int *sort, int start, int end) {
	int med=(start+end)/2;
	if(start!=end) {
		Mergesort(sort, start, med);
		Mergesort(sort, med+1, end);
		Merge(sort, start, med, med+1, end);
	}
	return;
}

void Merge(int *sort, int start1, int end1, int start2, int end2) {
	int temp[100], s1=start1, e1=end1, s2=start2, e2=end2, i=start1;
	while(s1<=e1 && s2<=e2) {
		if(sort[s1]<sort[s2])
			temp[i++]=sort[s1++];
		else
			temp[i++]=sort[s2++];
	}
	if(s1>e1)
		while(s2<=e2)
			temp[i++]=sort[s2++];
	else
		while(s1<=e1)
			temp[i++]=sort[s1++];
	for(int j=start1; j<=end2; j++)
		sort[j]=temp[j];
	return;
}
