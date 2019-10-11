#include <bits/stdc++.h>
using namespace std ;
int lbitonics(int arr[], int n)
{
    int lis[n],lds[n];
	int j;
	fill(lis,lis+n,1);
	fill(lds,lds+n,1);
	for(int i=1;i<n;i++)
	{
		j=0;
		while(j<i)
		{
			if(arr[j]<arr[i])
				lis[i]=max(lis[i],lis[j]+1);
			j++;
		}

	}
	for(int i=n-2;i>=0;i--)
	{
		j=n-1;
		while(j>i)
		{
			if(arr[j]<arr[i])
				lds[i]=max(lds[i],lds[j]+1);
			j--;
		}

	}
	int mele=0;
	for(int i =0;i<n;i++)
	{
	    if(mele<lis[i]+lds[i]-1)
	       mele=lis[i]+lds[i]-1;
	}
	return mele;
	

}

int main()
{
	int n;
//	cout << "enter the size of the array :";
	cin>>n;
	int arr[n];
 //	cout<< "enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	int mele=lbitonics(arr,n);
	cout<<mele;
}