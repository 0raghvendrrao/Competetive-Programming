#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long long n,m,a,num=0;
	cin>>n>>m>>a;
	if(n%a!=0)
	n+=a;
	if(m%a!=0)
	m+=a;
	num=(n/a)*(m/a);
	cout<<num;
	return 0;
}