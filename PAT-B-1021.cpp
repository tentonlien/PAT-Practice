#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char num[1010];
	static int sum[10];
	cin>>num;
	for(int i=0;i<strlen(num);i++) {
		sum[num[i]-48]++;
	}
	for(int i=0;i<10;i++) {
		if(sum[i]!=0) {
			cout<<i<<":"<<sum[i]<<endl;
		}
	}
	return 0;
} 
