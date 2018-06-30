#include <stdio.h>
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int score[100];
	for(int i=0;i<m;i++) {
		scanf("%d",&score[i]);
	}
	int answer[100];
	for(int i=0;i<m;i++) {
		scanf("%d",&answer[i]);
	}
	int people[100][100];
	for(int i=0;i<n;i++) {
		for(int k=0;k<m;k++) {
			scanf("%d",&people[i][k]);
		}
	}
	for(int i=0;i<n;i++) {
		int sum=0;
		for(int k=0;k<m;k++) {
			if(people[i][k]==answer[k]) {
				sum+=score[k];
			}

		}
		printf("%d",sum);
		if(i!=n-1) printf("\n");
	}
	return 0;
} 
