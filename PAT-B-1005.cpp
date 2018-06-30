#include <iostream>
using namespace std;
int main() {
	int num[110],prop[110],n;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>num[i];
		prop[i]=1;
	}
	for(int i=0;i<n;i++) {
		int temp=num[i];
		while(temp!=1) {
			if(temp%2==0) {
				temp/=2;
			} else {
				temp=(3*temp+1)/2;
			}
			if(temp!=1) {
				for(int k=0;k<n;k++) {
					if(num[k]==temp) {
						prop[k]=0;
					}
				}
			}
		}
	}
	int out[100],j=0;
	for(int i=0;i<n;i++) {
		if(prop[i]==1) {
			out[j++]=num[i];
		}
	}
	for(int i=0;i<j;i++) {
		for(int k=i;k<j;k++) {
			if(out[i]<out[k]) {
				int temp=out[i];
				out[i]=out[k];
				out[k]=temp;
			}
		}
	}
	for(int i=0;i<j-1;i++) {
		cout<<out[i]<<" ";
	}
	cout<<out[j-1];
	return 0;
} 
