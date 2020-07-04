#include<bits/stdc++.h>
using namespace std;
int main()
{
int  t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int j=0;j<n;++j)
	cin>>b[j];
	sort(a,a+n);
	sort(b,b+n);
	for(int l=0,p=n-1;l<n,p>0,k!=0;l++,p--)
	{
if(a[l]<b[p])
	a[l]=b[p];
	k=k-1;
}
int sum=0;
for(int h=0;h<n;h++)
sum+=a[h];
cout<<sum<<endl;

	
	
	
	}
	return 0;
	
}
