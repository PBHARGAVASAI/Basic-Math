#include<iostream>
using namespace std; 
int main()
{
	int i,n,count=1;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	cout<<"the given no. is prime number";
	else
	cout<<"not prime number";
	return 0;
}
