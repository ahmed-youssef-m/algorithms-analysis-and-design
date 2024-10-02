#include<iostream>
#include<vector>
#include <list>
#include <stack>

using namespace std;

void dfs(vector<list<int>>& adjList, int str) {

	stack<int>s;//you can use process stack by using recursion instead of normal stack
	s.push(str);

	vector<bool>visited(adjList.size(), false);

	while (!s.empty()) 
	{
		int curr = s.top();

		s.pop();

		if (!visited[curr])
		{
			visited[curr] = true;
			cout << curr << " ";
		}

		for (int n : adjList[curr])
		{
			if (!visited[n]) {
				s.push(n);
			}
		}

	}
}
void addEdge(vector<list<int>>& adjList, int i, int j) {

	adjList[i].push_back(j);
	adjList[j].push_back(i);

}

int main() {

	vector <list<int>>adjList(5);

	addEdge(adjList, 1, 2);
	addEdge(adjList, 1, 0);
	addEdge(adjList, 2, 0);
	addEdge(adjList, 2, 3);
	addEdge(adjList, 2, 4);

	dfs(adjList, 1);

	return 0;
}

//Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
//Auxiliary Space : O(V).
//The output : DFS spanning tree.
