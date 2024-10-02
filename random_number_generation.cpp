//#include<iostream>
//#include<ctime>
//#include<cstdlib>  // rand() and srand()
//#include<random>
//
//using namespace std;
//
//void fun1() {
//
//	srand(time(0));
//
//	for (int i = 0; i < 100; i++)
//	{
//		int rn = rand();
//		//cout << rn << " ";
//		//cout << rn % 10 << " "; // 0 - 9
//		cout << rn % 10 + 2 << " "; // 2 - 9
//	}
//
//}
//
//void fun2() {
//
//	random_device rd;
//	mt19937 gen(rd());
//	uniform_int_distribution<> distr(0, 50);
//
//	for (int i = 0; i < 100; i++)
//	{
//		int rn = distr(gen);
//		cout << rn << " "; //0 - 50
//	}
//}
//
//int main() {
//
//	//fun1();
//	fun2();
//
//	return 0;
//}