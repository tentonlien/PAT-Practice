#include <iostream>
using namespace std;
int main() {
	char str[1100];
	str[0]=cin.get();
	int i=0;
	while(str[i]!='\n') {
		str[++i]=cin.get();
	}
	int time[26];
	for(int k=0;k<26;k++) time[k]=0;
	for(int k=0;k<i;k++) {
		if(str[k]>='a' && str[k]<='z') {
			time[str[k]-97]++;
		} else if(str[k]>='A' && str[k]<='Z') {
			time[str[k]-65]++;
		}
	}
	int max=0;
	for(int k=0;k<26;k++) {
		if(time[k]>max) {
			max=time[k];
		}
	}
	for(int k=0;k<26;k++) {
		if(time[k]==max) {
			cout<<k+97<<" "<<time[k]; 
			break;
		}
	}
	return 0;
} 
