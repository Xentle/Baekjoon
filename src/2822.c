#include <stdio.h>

int main() {
	int score[9], index[9], temp, sum=0;
	for(int i=1; i<9; i++) {
		scanf("%d", &score[i]);
		getchar();
	}
	for(int i=1;i <9; i++)
		index[i] = i;
	for(int i=8; i>1; i--) {
		for(int j=1; j<i; j++) {
			if(score[j] > score[j+1]) {
				temp = score[j];
				score[j] = score[j+1];
				score[j+1] = temp;
				temp = index[j];
				index[j] = index[j+1];
				index[j+1] = temp;
			}
		}
	}
	for(int i=4; i<=8; i++)
		sum += score[i];
	printf("%d\n", sum);
	for(int i=8; i>4; i--) {
		for(int j=4; j<i; j++) {
			if(index[j] > index[j+1]) {
				temp = index[j];
				index[j] = index[j+1];
				index[j+1] = temp;
			}
		}
	}
	printf("%d %d %d %d %d\n", index[4], index[5], index[6], index[7], index[8]);
	return 0;
}