#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	int arr[n];
	cout << "Enter the array elements: ";
	for(int i=0;i<n;++i) {
		cin >> arr[i];
	}
	for(int i=0;i<n;++i) {
		int temp;
		if((i+1)%2 != 0) {
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	cout << "The new array is: " << endl;
	for(int i=0;i<n;++i) {
		cout << arr[i] << " ";
	}
	return 0;
}