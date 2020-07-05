#include<bits/stdc++.h>
/* This header file includes all the header files like <iostream>,<vector>,<algorithm>,<cstdio> etc */
using namespace std;
int main()
{
	//For almost all problems on codeforces involving multiple test cases 
long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		if(a[0]>a[n-1])
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
		
	}
	return 0;
	
}
