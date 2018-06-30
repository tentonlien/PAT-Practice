#include <stdio.h>
int main() {
	int n,k;
	scanf("%d",&n);
	if(n>99) {
		k=n/100;
		for(int i=0;i<k;i++) {
			printf("B");
		}
		k=n/10%10;
		for(int i=0;i<k;i++) {
			printf("S");
		}
		k=n%10;
		for(int i=1;i<=k;i++) {
			printf("%d",i);
		}
	} else if(n>9) {
		k=n/10;
		for(int i=0;i<k;i++) {
			printf("S");
		}
		k=n%10;
		for(int i=1;i<=k;i++) {
			printf("%d",i);
		}
	} else {
		k=n%10;
		for(int i=1;i<=k;i++) {
			printf("%d",i);
		}
	}
	return 0;
} 
