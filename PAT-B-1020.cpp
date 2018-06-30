#include <iostream>
using namespace std;
void swap(int* a,int *b) {
	int* c=a;
	a=b;
	b=c;
}

int main() {
	int n,d;
	double storage[1000],price[1000];
	double sngl[1000];
	cin>>n>>d;
	for(int i=0;i<n;i++) {
		cin>>storage[i];
	}
	for(int i=0;i<n;i++) {
		cin>>price[i];
		sngl[i]=price[i]/storage[i];
	}
	for(int i=0;i<n;i++) {
		for(int k=i+1;k<n;k++) {
			if(sngl[k]>sngl[i]) {
				swap(sngl[i],sngl[k]);
				swap(price[i],price[k]);
				swap(storage[i],storage[k]);
			}
		}
	}
	int od=0;
	double profit=0;
	while(d>0) {
		if(storage[od]==d) {
			profit+=price[od];
			break;
			return 0;
		} else if(storage[od]<d) {
			profit+=price[od];
			d-=storage[od++];
		} else {
			profit+=sngl[od]*d;
			break;
		}
	}
	printf("%.2f\n",profit);
	return 0;
}

