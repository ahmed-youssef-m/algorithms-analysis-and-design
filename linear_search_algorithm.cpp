#include<iostream>

using  namespace std;

int linearSearch(int arr[], int s,int key) {


	for (int i = 0; i < s; i++)
	{
		if (arr[i] == key)
			return i;
	}

	return -1;
}

int main(void)
{
	int arr[] = { 10, 20, 30, 40 };
	int x = 40;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = linearSearch(arr, n, x);
	cout << result;

}

//Time Complexity:
//Best Case   : O(1)
//Worst Case  : O(N)
//Average Case: O(N)
//Auxiliary Space : O(1)