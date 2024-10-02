//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int m1[3][2] = {
//		{ 1,2},
//		{ 3,4},
//		{5,6}
//	};
//
//	int m2[2][3] = {
//		{ 9,7,6},
//		{8,3,2}
//	};
//
//	int rs1 = 3;
//
//	int cs1 = 2;
//
//	int cs2 = 3;
//
//	int rm[3][3] = { 0 };
//
//	for (int i = 0; i < rs1; i++)
//	{
//		for (int j = 0; j < cs2; j++)
//		{
//			for (int k = 0; k < cs1; k++)
//			{
//				rm[i][j] += m1[i][k] * m2[k][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < rs1; i++)
//	{
//		for (int j = 0; j < cs2; j++)
//		{
//			cout << rm[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}