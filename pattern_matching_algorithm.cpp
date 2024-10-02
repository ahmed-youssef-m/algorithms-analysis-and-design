//#include<iostream>
//
//using  namespace std;
//
//void search(string& txt, string& pat) {
//
//	int n = txt.size();
//	int m = pat.size();
//
//	for (int i = 0; i <= n - m; i++)
//	{
//		int j;
//
//		for (j = 0; j < m; j++)
//		{
//			if (txt[i + j] != pat[j])
//			{
//				break;
//			}
//		}
//
//		if (j == m)
//		{
//			cout << i << " ";
//		}
//	}
//}
//
//int main(void)
//{
//	string txt = "AABAACAADAABAABA";
//	string pat = "AABA";
//
//	search(txt, pat);
//
//	return 0;
//}

//Time Complexity: O(N^2)
//Auxiliary Space: O(1)