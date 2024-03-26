#include<iostream>
using namespace std;
int main(){
	
	
	int m,n,p,q,i,j;
	float A[5][5] ,B[5][5] ,C[5][5];
	
	cout<<"Enter the row and column of matrix A:"<<endl;
	cin>>m>>n;
	
	cout<<"Enter the row and column of matrix B:"<<endl;
	cin>>p>>q;
	
	if((m!=p)&&(n!=q)){
		cout<<"Matrix cannot be added:"<<endl;
		exit(0);
	}
	
	cout<<"Enter the element of matrix A :"<<endl;
	for(i=0; i<m; i++)
	for(j=0; j<n; j++)
	cin>>A[i][j];
	
	cout<<"Enter the element of matrix B:"<<endl;
	for(i=0; i<p; i++)
	for(j=0; j<q; j++)
	cin>>B[i][j];
	
	
	cout<<"Now final matrix or added matrix"<<endl;
	
	for(i=0; i<m; i++)
	for(j=0; j<n; j++)
	C[i][j]=A[i][j]+B[i][j];
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++)
		cout<<C[i][j]<<"  ";
		cout<<endl;
	}
	return 0;
}
