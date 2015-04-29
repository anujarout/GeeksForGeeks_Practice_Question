#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}


/*void dutchnationalflag(int ar[],int n)
{
 int left=0,right=n-1,mid =0;
	while(mid<=right)
	{
		switch(ar[mid])
		{
			case 0:
			{
				swap(ar[mid],ar[left]);
				mid++;
				left++;
			}
			break;
			
			case 2:
			{
				swap(ar[mid],ar[right]);
				right--;
			}
			break;
			
			case 1:
				mid++;
			break;
		}
	}
}*/
 
 void dutchnationalflag(int ar[],int n)
{
 int left=0,right=n-1,mid =0;
	while(ar[mid]==0)
	{
		mid++;
		left++;
	}
	while(ar[right]==2)
	{
		right --;
	}

	while(mid<=right)
	{

		switch(ar[mid])
		{
			case 0:
			{
				swap(ar[mid],ar[left]);
				mid++;
				left++;
			}
			break;
			
			case 2:
			{
				swap(ar[mid],ar[right]);
				right--;
			}
			break;
			
			case 1:
				mid++;
			break;
		}
	}
}


/* driver program to test */
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
	cin>>arr[i];
  }
  dutchnationalflag(arr,n);
  cout<<"array after segregation ";
  for(int i = 0; i < n; i++){
   cout<<arr[i];}
 
  return 0;
}
