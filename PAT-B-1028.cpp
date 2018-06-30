#include <iostream>

using std::cin;
using std::cout;
using std::string;

static int max=-1,min=-1;
	int n,y[100000],m[100000],d[100000];
	string name[100000];
	int valid=0;

void comp(int i) {
	if(y[i]<y[max]) {
		max=i;
	} else if(y[i]==y[max]) {
		if(m[i]<m[max] || m[i]==m[max] && d[i]<d[max]) {
			max=i;
		}
	}
	
	if(y[i]>y[min]) {
		min=i;
	} else if(y[i]==y[min]) {
		if(m[i]>m[min] || m[i]==m[min] && d[i]>d[min]) {
			min=i;
		}
	}
}

bool check(int i) {
		if(y[i]>1814 && y[i]<2014) {
			return true;
		} else if(y[i]==1814) {
			if(m[i]>9) {
				return true;
			} else if(m[i]==9) {
				if(d[i]>5) {
					return true;
				}
			}
		} else if(y[i]==2014) {
			if(m[i]<9 || m[i]==9 && d[i]<7) {
				return true;
			}
		}
		return false;
}

int main() {

	cin>>n;
	
	
	for(int i=0;i<n;i++) {
		cin>>name[i];
		scanf("%d/%d/%d",&y[i],&m[i],&d[i]);
		if(check(i)) {
			valid++;
			if(max==-1) max=i;
			if(min==-1) min=i;
			comp(i);
			
		}

	}
	if(max!=-1) {
		cout<<valid<<" "<<name[max]<<" "<<name[min];
	} else {
		cout<<valid;
	}
	return 0;
} 
