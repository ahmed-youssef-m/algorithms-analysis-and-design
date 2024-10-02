#include<iostream>

using namespace std;

void display(int arr[], int s) {
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";
	}
}

void bubbleSort(int arr[], int s) {
	for (int i = 0; i < s - 1; i++)
	{
		for (int j = 0; j < s - i - 1; j++)
		{
			//cout << arr[j] << ":" << arr[j + 1] << " ";

			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
		cout << endl;
		display(arr, s);
		cout << "Pass: #" << i + 1 << endl;
	}
}

//Intelligent Bubble Sort Algorithm
void bubbleSort(int arr[], int s) {
	bool flag = false;
	for (int i = 0; i < s - 1; i++)
	{
		for (int j = 0; j < s - i - 1; j++)
		{
			//cout << arr[j] << ":" << arr[j + 1] << " ";

			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}
		cout << endl;
		display(arr, s);
		cout << "Pass: #" << i + 1 << endl;
		if (!flag)
		{
			break;
		}
	}
}

int main() {
	int arr[] = { 100,60,20,50,30,90 };
	//int arr[] = { 20,30,50,60,90,100 };
	int size = sizeof(arr) / sizeof(arr[0]);

	display(arr, size);
	cout << endl;
	bubbleSort(arr, size);
	//display(arr, size);

	return 0;
}

//Time complexity:
//Best case: o(n)
//Worst & average: O(n)^2

//Space complexity:O(1)