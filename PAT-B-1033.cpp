#include <iostream>
using namespace std;
int main() {
	char chr[100],str[100001];
	chr[0]=cin.get();
	int i=0;
	while(chr[i]!='\n') {
		chr[++i]=cin.get();
	}
	//cin>>chr;
	cin>>str;
	for(int i=0;str[i]!=0;i++) {
		for(int k=0;chr[k]!=0;k++) {
			if(str[i]==chr[k]) {
				str[i]='*';
				break;	
			} else if(str[i]==chr[k]+32 && str[i]>='a' && str[i]<='z') {
				str[i]='*';
				break;
			} else if(chr[k]=='+' && str[i]>='A' && str[i]<='Z') {
				str[i]='*';
				break;
			}
		}
		if(str[i]!='*') cout<<str[i];
	}
	cout<<endl;
	return 0;
} 
