//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//#define V 5
//
//int minKey(int Key[V], bool mstSet[V]) {
//
//	int min = INT_MAX, min_index;
//
//	for (int i = 0; i < V; i++)
//	{
//		if (mstSet[i] == false && Key[i] < min) {
//			min = Key[i];
//			min_index = i;
//		}
//	}
//
//	return min_index;
//}
//
//void display(int parent[V]) {
//	for (int i = 0; i < V; i++)
//	{
//		cout << parent[i] << " " << i << endl;
//	}
//}
//
//void prim(int graph[V][V]) {
//
//	bool mstSet[V] = { false };
//
//	int Key[V] = { INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX };
//
//	int parent[V];
//
//	Key[0] = 0;
//
//	parent[0] = -1;
//
//	for (int i = 0; i < V - 1; i++)
//	{
//		int u = minKey(Key, mstSet);
//
//		mstSet[u] = true;
//
//		for (int j = 0; j < V; j++)
//		{
//			if (graph[u][j] && mstSet[j] == false && graph[u][j] < Key[j]) {
//
//				Key[j] = graph[u][j];
//
//				parent[j] = u;
//			}
//		}
//	}
//
//	display(parent);
//}
//
//int main()
//{
//	int graph[V][V] = { { 0, 2, 0, 6, 0 },
//						{ 2, 0, 3, 8, 5 },
//						{ 0, 3, 0, 0, 7 },
//						{ 6, 8, 0, 0, 9 },
//						{ 0, 5, 7, 9, 0 } };
//	prim(graph);
//
//	return 0;
//}
//Time Complexity: O(V2)
//Auxiliary Space : O(V)