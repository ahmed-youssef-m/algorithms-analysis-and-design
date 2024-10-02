#include<iostream>
#include<vector>
#include <list>
#include <queue>

using namespace std;

void bfs(vector<list<int>>& adjList, int s) {

	queue<int>q;
	q.push(s);

	vector<bool>visited(adjList.size(), false);
	visited[s] = true;

	while (!q.empty())
	{
		int curr = q.front();

		q.pop();

		for (int n : adjList[curr])
		{
			//if (adjMatrix[node][i] == 1 && !visited[i])//if i work with matrix
			if (!visited[n]) {
				q.push(n);
				visited[n] = true;
			}
		}

		cout << curr << " ";
	}
}

void addEdge(vector<list<int>>& adjList, int i, int j) {

	adjList[i].push_back(j);
	adjList[j].push_back(i);

}

int main() {

	vector <list<int>>adjList(5);

	addEdge(adjList, 0, 1);
	addEdge(adjList, 0, 2);
	addEdge(adjList, 1, 3);
	addEdge(adjList, 1, 4);
	addEdge(adjList, 2, 4);

	bfs(adjList, 0);

	return 0;
}

//Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
//Auxiliary Space : O(V)
//The output : BFS spanning tree