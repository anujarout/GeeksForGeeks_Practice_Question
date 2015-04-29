#include<iostream>
using namespace std;
int main()
{
	int ar[100];
	int n,x,i,temp;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>ar[i];
	x=n-1;
	for(i=0;i<(x-i);i++)
	{
		temp=ar[i];
		ar[i]=ar[x-i];
		ar[x-i]=temp;
	}
	for(i=0;i<n;i++)
		cout<<ar[i];
	return 0;
}
