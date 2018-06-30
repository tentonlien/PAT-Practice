#include <iostream>
using namespace std;
int main() {
	int sum[10];
	for(int i=0;i<10;i++) {
		cin>>sum[i];
	}
	int fst;
	for(int i=1;i<10;i++) {
		if(sum[i]!=0) {
			fst=i;
			sum[i]--;
			cout<<fst;
			break;
		}
	}
	for(int i=0;i<10;i++) {
		while(sum[i]!=0) {
			cout<<i;
			sum[i]--;
		}
	}
	return 0;
} 
