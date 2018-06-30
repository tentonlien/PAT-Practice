#include <iostream>
#include <string>
using namespace std;

int Rank(int order,int x);
int Rank(int order,int x) {
	int bit[4];
	bit[0]=x/1000;
	bit[1]=x/100%10;
	bit[2]=x/10%10;
	bit[3]=x%10;
	if(bit[0]==bit[1] && bit[2]==bit[3] && bit[1]==bit[2]) {
		return -1;
	}
	if(order==1) {
		for(int i=0;i<4;i++) {
			for(int k=i;k<4;k++) {
				if(bit[k]<bit[i]) {
					int temp=bit[k];
					bit[k]=bit[i];
					bit[i]=temp;
				}
			}
		}
	} else {
		for(int i=0;i<4;i++) {
			for(int k=i;k<4;k++) {
				if(bit[k]>bit[i]) {
					int temp=bit[k];
					bit[k]=bit[i];
					bit[i]=temp;
				}
			}
		}
	}
	return bit[0]*1000+bit[1]*100+bit[2]*10+bit[3];
}

int main() {
	int n;
	cin>>n;
	if(Rank(1,n)==-1) {
		cout<<n<<" - "<<n<<" = 0000"<<endl;
		return 0;
	}
	int oprt=n;
	while(oprt!=6174 || n==6174) {
		string sub1,sub2;
		if(Rank(1,oprt)<10) {
			sub1="000";
		} else if(Rank(1,oprt)<100) {
			sub1="00";
		} else if(Rank(1,oprt)<1000) {
			sub1="0";
		}
		if(Rank(0,oprt)-Rank(1,oprt)<10) {
			sub2="000";
		} else if(Rank(0,oprt)-Rank(1,oprt)<100) {
			sub2="00";
		} else if(Rank(0,oprt)-Rank(1,oprt)<1000) {
			sub2="0";
		}
		cout<<Rank(0,oprt)<<" - "<<sub1<<Rank(1,oprt)<<
			" = "<<sub2<<Rank(0,oprt)-Rank(1,oprt)<<endl;
		oprt=Rank(0,oprt)-Rank(1,oprt);
		n=0;
	}
	return 0;
} 
