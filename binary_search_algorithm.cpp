//#include<iostream>
//
//using  namespace std;
//
//int binarySearch(int arr[], int l, int h, int x) {
//
//
//	while (l <= h)
//	{
//		int m = l + (h - 1) / 2;// Safe middle index calculation
//
//		if (x < arr[m])
//		{
//			h = m - 1;
//		}
//		else if (x > arr[m])
//		{
//			l = m + 1;
//		}
//		else
//		{
//			return m;
//		}
//	}
//
//	return -1;
//}
//
//int main(void)
//{
//	int arr[] = { 10, 20, 30, 40 };
//	int x = 10;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int result = binarySearch(arr, 0, n - 1, x);
//	cout << result;
//
//}
//
////Time Complexity: O(log N)
////Auxiliary Space : O(1)