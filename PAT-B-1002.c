#include <stdio.h>
#include <string.h>

int main() {
	char num[400],*numc[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int n[400],sum=0,bit[200],temp,k;
	int i;
	scanf("%s",num);
	for(i=0;i<strlen(num);i++) {
		n[i]=num[i]-48;
		sum+=n[i];
		//printf("%d",n[i]);
	}
	//printf("%d\n",sum);
	i=0;
	temp=1;
	while(temp<=sum) {
		bit[i++]=sum/temp%10;
		temp*=10;
	}
	for(k=i-1;k>0;k--) {
		printf("%s ",numc[bit[k]]);
	}
	printf("%s",numc[bit[0]]);
	return 0;
}
