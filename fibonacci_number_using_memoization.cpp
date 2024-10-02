//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int fib(vector<int>memo, int n)
//{
//	if (n < 2)
//	{
//		return n;
//	}
//
//	if (memo[n] != -1)
//	{
//		return memo[n];
//	}
//
//	memo[n] = fib(memo, n - 1) + fib(memo, n - 2);
//
//	return memo[n];
//}
//
//int main()
//{
//	int n = 10;
//
//	vector<int> memo(n + 1, -1);
//
//	cout << fib(memo, n);
//
//	return 0;
//}

//Time Complexity: O(N)
//Auxiliary Space: O(N)