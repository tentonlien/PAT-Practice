#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char chand[1000],ceye[1000],cmouth[1000];
	char hand[500][4],eye[500][4],mouth[500][4];
	cin.getline(chand,1000);
	cin.getline(ceye,1000);
	cin.getline(cmouth,1000);
	int o=0;
	for(int i=0;chand[i]!=0;i++) {
		if(chand[i]=='[') {
			int k;
			for(k=i+1;chand[k]!=']';k++) {
				hand[o][k-i-1]=chand[k];
				
			}
			hand[o][k-i-1]=0;
			o++;
		}
	}
	
	o=0;
	for(int i=0;ceye[i]!=0;i++) {
		if(ceye[i]=='[') {
			int k;
			for(k=i+1;ceye[k]!=']';k++) {
				eye[o][k-i-1]=ceye[k];
				
			}
			eye[o][k-i-1]=0;
			o++;
		}
	}
	o=0;
	for(int i=0;cmouth[i]!=0;i++) {
		if(cmouth[i]=='[') {
			int k;
			for(k=i+1;cmouth[k]!=']';k++) {
				mouth[o][k-i-1]=cmouth[k];
				
			}
			mouth[o][k-i-1]=0;
			o++;
		}
	}
	int n;
	cin>>n;
	int a[1000],b[1000],c[1000],d[1000],e[1000];
	for(int i=0;i<n;i++) {
		cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
	}
	
	
	//for(int i=0;i<5;i++) cout<<hand[i]<<"  ";
	for(int i=0;i<n;i++) {
		if(hand[a[i]-1][0]!=0 && eye[b[i]-1][0]!=0 && mouth[c[i]-1][0]!=0 && eye[d[i]-1][0]!=0 && hand[e[i]-1][0]!=0) {
			cout<<hand[a[i]-1]<<"("<<eye[b[i]-1]<<mouth[c[i]-1]<<eye[d[i]-1]<<")"<<hand[e[i]-1]<<endl;
		} else {
			cout<<"Are you kidding me? @\\/@"<<endl;
		}
	}	
	return 0;
}
