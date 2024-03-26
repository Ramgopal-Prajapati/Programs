



#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    if (n == 0 || n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubblesort(arr, n - 1);
}
int main()
{
    int arr[20],i,j,a;
    cout<<"Enter array element"<<endl;
    for(i=0; i<5; i++){
    	cin>>arr[i];
	}
	cout<<"Origanal array "<<endl;
	for(j=0; j<5;j++){
		cout<<arr[j]<<" ";
	}
    cout<<"Here your aranged  mixed"<<endl;
    bubblesort(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
