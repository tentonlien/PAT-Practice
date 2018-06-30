#include <iostream>
using namespace std;
int main() {
	static int sch[100000],stu[100000],scr[100000],n,max;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>sch[i]>>stu[i];
		scr[sch[i]-1]+=stu[i];
		if(max<sch[i]-1) {
			max=sch[i]-1;
		}
	}
	int maxx=0;
	for(int i=0;i<max;i++) {
		if(scr[i]>scr[maxx]) {
			maxx=i;
		}
	}
	cout<<maxx+1<<" "<<scr[maxx]<<endl;
	
	return 0;
} 
