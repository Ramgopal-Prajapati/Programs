#include<iostream>
using namespace std;

int main()
{
int i,j;
int n;
cout<<"Enter the size of pattern"<<endl;
cin>>n;
for(i=0; i<=n; i++)
{
	for(j=0; j<=n; j++)
	{
	
	if(i==0 || i==n || j==0 || j==n)
	{
		
		cout<<"*";
	}

	else
	{
		cout<<" ";
	}
}
	cout<<endl;
}
}
