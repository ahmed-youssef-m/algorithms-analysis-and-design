#include<iostream>

using namespace std;

int partition(int arr[], int l, int h) {
	int pivot = arr[h];
	int i = l - 1;
	for (int j = l; j < h; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;

			/*if (i != j)
			{
				swap(arr[i], arr[j]);
			}*/

			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[h]);
	return (i + 1);

}

void quicksort(int arr[], int l, int h) {

	if (l < h) {

		int pi = partition(arr, l, h);
		quicksort(arr, l, pi - 1);
		quicksort(arr, pi + 1, h);
	}
}

void printarray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	//int arr[] = { 10,16,8,12,15,14,6,4,9,5,50 };
	int arr[] = { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printarray(arr, n);

	quicksort(arr, 0, n - 1);

	printarray(arr, n);

	return 0;
}

//Time Complexity:
//Best & Average: O(n log n)
//Worst case: O(n^2)
//Space Complexity: O(1)
//Lomuto is easy to understand and moves pivot to its correct position. However Hoare’s is faster than Lomuto.