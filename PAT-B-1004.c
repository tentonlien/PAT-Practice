#include <stdio.h>
#include <string.h>

int main() {
	int n,score[10000],i;
	char name[10000][11],num[10000][11];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%s%s%d",name[i],num[i],&score[i]);
	}
	int max=0,min=0;
	for(i=1;i<n;i++) {
		if(score[i]>score[max]) max=i;
		if(score[i]<score[min]) min=i;
	}
	printf("%s %s\n%s %s\n",name[max],num[max],name[min],num[min]);
	return 0;
}
