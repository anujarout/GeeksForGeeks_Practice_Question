#include<iostream>
using namespace std;
int totalsum=0;
void equilibrium_index(int ar[],int n)
 {
	 int i,sol =0,sor = totalsum;
	 for(i=0;i<n;i++)
	 {
		 sol+=ar[i];
		 sor-=ar[i];
		 if((sol-ar[i])== sor)
			{ cout<<i<<" ";
			return;}
	 }
 }
 
 
int main()
{
 int n,m;
 cin>>n;
  int arr1[n],hash_size=0,min=2901931,max=0;
  for(int i=0;i<n;i++){
  cin>>arr1[i];
   }
equilibrium_index(arr1,n);cout<<endl;
  return 0;
}
  
