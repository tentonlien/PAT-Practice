#include <iostream>
using namespace std;
int main() {
	int a,b,bit;
	cin>>a>>b>>bit;
	a+=b;
	int oct[100],i=0;
	bool loop=true;
	while(loop) {
		if(a/bit==0) {
			oct[i]=a;
			loop=false; 
		} else {
			oct[i++]=a-a/bit*bit;
			a=a/bit;
		}

	}

	for(int k=i;k>=0;k--) {
		cout<<oct[k];
	}
	return 0;
}
