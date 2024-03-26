#include<iostream>
using namespace std;
	int a[100];
	int i,j,n;
void ram()
   {
	for( int i=0; i<n-1; i++)
	{
		 int min=i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[min]){
				min =j;
			}
		}
		if(min!=i)
		{
			int temp;
			temp=a[i];
			a[i]=a[min]; 
			a[min]=temp;
		}
	}
}
int main(){
	cout<<"Enter array size"<<endl;
	cin>>n;
	cout<<"Enter array element "<<endl;
	for(i=0; i<=n; i++)
	{
		cin>>a[i];
	}
	ram( );
	for(j=0; j<n; j++
	){
		cout<<a[j]<<" ";
	}
	return 0;
}
