#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,c=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
		if(a[i-1]>=a[i])
			c++;
	}
	cout<<"count : "<<c;
	return 0;
}