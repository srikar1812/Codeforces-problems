//problem statement link - https://codeforces.com/contest/1375/problem/C
//Simple solution :  if a[0]<a[n-1],print YES else NO
                                
                                                        /*Explination*/
/*The answer is YES iff a1<an. Let's find out why.

When a1<an, we can repeatedly use this algorithm while the permutation contains more than one element:

Find the smallest index r such that a1<ar.
Choose ar and the element comes right before ar and delete the element before ar.
Repeat step 2 until ar is adjacent to a1.
Choose a1 and ar, and delete ar.
This algorithm is valid because since r is the smallest index such that a1<ar, every element between a1 and ar is less than a1 and therefore less than ar, so all of them can be deleted when pairing up with ar.
When a1>an, we have some observations:

The leftmost element is non-decreasing. That is because if we want to remove the old leftmost element a1, we need to pair it with a2>a1, and that will result in the leftmost element increasing.
Likewise, we can use the same argument to show that the rightmost element is non-increasing.
Therefore, the leftmost and rightmost elements can never pair up, hence our permutation cannot be reduced to one element. */
//Reference - CodeForces Blog



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
