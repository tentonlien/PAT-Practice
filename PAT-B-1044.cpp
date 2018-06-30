#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string num[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	string high[12]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	int n;
	cin>>n;
	getchar();
	char s[100][100];
	for(int i=0;i<n;i++) {
		cin.getline(s[i],100);
		if(s[i][0]<='9') {
			int pos=1;
			int num=0;
			for(int k=strlen(s)-1;k>=0;k--) {
				num+=(s[k]-48)*pos;
				pos*=10;
			}
			while(num!=0) {
				
			}
		}
	}
	
	return 0;
}
