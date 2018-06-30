#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str1[81],str2[81],repeat[81];
	cin>>str1>>str2;
	int fcs=0,rpt=0;
	repeat[0]=0;
	for(int i=0;i<strlen(str1);i++) {
		if(str1[i]!=str2[fcs]) {
			bool x=true;
			//cout<<"  "<<repeat<<endl;
			for(int k=0;k<=rpt+1;k++) {
				//cout<<" string "<<repeat<<endl;
				if(repeat[k]==str1[i]||(repeat[k]==str1[i]-32)&&(str1[i]>='a'&&str1[i]<='z')) {
					x=false;
				}
			}
			if(x==true) {
				if(str1[i]>='a' && str1[i]<='z') {
					str1[i]-=32;
					cout<<(char)(str1[i]);
				} else {
					cout<<str1[i];
				}
				repeat[rpt++]=str1[i];
				repeat[rpt]=0;
				
			}
		} else {
			fcs++;
		}
	}
	return 0;
} 
