
/*Problem statement - https://codeforces.com/contest/1375/problem/A */
                             //SignFlip
#include<bits/stdc++.h>
using namespace std;
int main()
{
int  t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int j=0;j<n;j++)
{
if(j%2==0 )
{
if(a[j]<0)
continue;
else
a[j]=-a[j];
}
 
if(j%2!=0  )
{
if(a[j]>0)
continue;
else
a[j]=-a[j];
}
}

	

	for(int p=0;p<n;p++)
cout<<a[p]<<' ';
cout<<endl;



	
	
	
	}
	return 0;

	
}
