#include <stdio.h>

int main() {
	int n,i,row,column,k;
	char c;
	scanf("%d %c",&n,&c);
	if(n%2==0) {
		i=n/2;
	} else {
		if(n/2.0-n/2>0.4) {
			i=n/2+1;
		} else {
			i=n/2;
		}
	}
	for(row=0;row<i;row++) {
		for(column=0;column<n;column++) {
			if(row==0 ||row==i-1) {
				printf("%c",c);
			} else {
				if(column==0 ||column==n-1) {
					printf("%c",c);
				} else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	
	return 0;
}
