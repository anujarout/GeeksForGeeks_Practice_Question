#include<iostream>
using namespace std;
int main()
{
	int ar[100],n,i,target,mid,f=0,l;
	cout<<"Enter array size\n";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>ar[i];
	cout<<"Enter number to be searched\n";
	cin>>target;
	mid = n+1;
	l=n-1;
	while(f<=l)
	{
		if(ar[mid]==target)
		{
			cout<<"number found "<<target<<" at "<<mid+1<<endl;
			break;
		}
		else if(ar[mid]<target)
		{
			f=mid;
			mid=(f+l)/2;
		}
		else
		{
			l=mid;
			mid=(f+l)/2;
		}
		
	}
	return 0;
}
