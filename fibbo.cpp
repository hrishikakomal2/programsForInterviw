#include<bits/stdc++.h>
using namespace std;

int main()
{
	int first = 0 , second = 1 , next =0;
	int n;
	cin>>n;
	cout<<first<<endl;
	cout<<second<<endl;
	for(int i = 2; i <  n ; i++ )
	{
		next = first + second;
		cout<<next<<endl;
		first = second;
		second = next;
		
	}
	
	return 0;
}
