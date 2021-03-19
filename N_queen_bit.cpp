//Author: thewackyindian
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

//bitset is 8 times space optimized



bitset<100> col,right_diag,left_diag;
int qcount =0;
void trackqueen(int i,int n)
{
	//base case
	if(i==n)
	{
		qcount++;
		return;
	}
	//self-work
	for(int j=0;j<n;j++)
	{
		if(!col[j] && !left_diag[i-j+n-1] && !right_diag[i+j])
		{
		
			col[j] = left_diag[i-j+n-1]= right_diag[i+j]=1;
			trackqueen(i+1,n);
			col[j] = left_diag[i-j+n-1]= right_diag[i+j]=0;
		}
	}	

} 
 
 
 
int main()
{
	int n;
	cin>>n;
	trackqueen(0,n);
	cout<<qcount<<endl;
	return 0;
} 
