#include <stdio.h>
int cut(int x);
int main() {
	int n,i=0;
	scanf("%d",&n);
	while(n!=1) {
		n=cut(n);
		i++;
	}
	printf("%d",i);
	return 0;
}

int cut(int x) {
	if(x%2==0) {
		return x/2;
	} else {
		return (3*x+1)/2;
	}
}
