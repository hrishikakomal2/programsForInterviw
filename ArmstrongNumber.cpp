#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1 , num2 , rev =0 , digit=0;
	cin>>num1;
	num1 = num2;
	while(num2 >0)
	{
	digit = num2%10;
	rev = digit*digit*digit + rev;
	num2 = num2/10;
	}
	if ( num2 == num1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	
	 
}
