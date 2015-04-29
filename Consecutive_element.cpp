#include<iostream>
using namespace std;
/*bool consecutivearray(int ar[],int n,int largest)
{
	int hash[largest+1],i,count=n,traverse=largest;
//	cout<<"hash creation start"<<endl;
	for(i=0;i<=largest;i++)
	hash[i]=0;
	for(i=0;i<n;i++)
		hash[ar[i]]++;
	for(i=0;i<=largest;i++)
	cout<<hash[i]<<" ";
//	cout<<"hash creation end"<<endl;
	while(count--)
	{
		cout<<count<<endl;
		if(hash[traverse]>1 || hash[traverse] == 0)
			return false;
		traverse--;
	}
return true;	
}*/
/*bool consecutivearray(int ar[],int n,int largest,int min)
{
	int hash[largest],i,count=n,traverse=largest-1;
//	for(i=0;i<largest;i++)
//	hash[i]=0;
	for(i=0;i<n;i++)
		hash[ar[i]-1]++;
//	for(i=0;i<largest;i++)
//		cout<<hash[i]<<" ";
	cout<<endl;
	while(count--)
	{
	//	cout<<traverse<<endl;
		if((hash[traverse]>1) || (hash[traverse] == 0))
			return false;
		traverse--;
	//	largest--;
	}
return true;	
}*/
/*
bool consecutivearray(int ar[],int n,int largest)
{
	int hash[largest+1],i,count=n,traverse=largest;
	for(i=0;i<largest+1;i++)
		hash[i] = 0;
	for(i=0;i<n;i++)
		hash[ar[i]]++;
	while(count--)
	{
		if((hash[traverse]>1) || (hash[traverse] == 0))
			return false;
		traverse--;
	}
return true;	
}*/
/*bool consecutivearray(int ar[],int n,int smallest, int largest)
{
	int size = (largest-smallest)+1;
	int hash[size],i,count=n,diff=0;

	for(i=0;i<size;i++) //initialize to zero
		hash[i] = 0;
	
	for(i=0;i<n;i++)
	{
		diff = largest -ar[i];
		if(diff>size)
			return false;
		else hash[diff]++;
	}
	for(i=0;i<size;i++)
	{
		if((hash[i]>1) || (hash[i] == 0))
			return false;
	}
return true;	
}*/
 bool consecutivearray(int ar[],int n,int smallest, int largest) //time O  space O(1)
{
	int size = (largest-smallest)+1;
	if (size != n) return false;
	else
	{
		for(int i=0;i<n;i++)
		{
			ar[i] = largest -ar[i];
			if(ar[i]<0)
				return false;
			else ar[i] = -ar[i];
		}
	}
return true;	
}


int main()
{
 int n,m;
 cin>>n;
  int arr1[n],hash_size=0,min=2901931,max=0;
  for(int i=0;i<n;i++){
  cin>>arr1[i];
  if(arr1[i]>hash_size)
  hash_size=arr1[i];
  if(arr1[i]<min)
  min=arr1[i];
  else
  max=arr1[i];
  }
 if(consecutivearray(arr1,n,min,max))
	cout<<"True\n";
else
	cout<<"False\n";
 
  return 0;
}
  
