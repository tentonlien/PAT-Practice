#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char num[1001],res[1001];
	int x,ys,k=0;
	cin>>num>>x;
	int m=num[0]-48;
	for(int i=0;i<strlen(num);i++) {
		if(m/x!=0||(i!=0)&&(m/x==0)) res[k++]=(m/x)+48;
		int temp=m-(m/x)*x;
		m=(m-(m/x)*x)*10+num[i+1]-48;
		ys=temp;
	}
	res[k]=0;
	if(k==0) {
		res[0]='0';
		res[1]=0;
	}
	cout<<res<<" "<<ys<<endl;
	return 0;
}
