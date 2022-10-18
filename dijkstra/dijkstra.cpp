
// Sample code to perform I/O:

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int mincostvert(vector<int> &cost, vector<int> &visited, int src, int n) {
	int mincost = INT_MAX;
	int ans;
	for(int i = 0; i < n; ++i) {
		if(!visited[i] && cost[i] < mincost) {
			ans = i;
			mincost = cost[i];
		}
	}
	return ans;
}

int main() {
	int cases = 0, n = 0;
	cin >> cases;
	for(int cas = 0; cas < cases; cas++) {
		cin >> n;
		vector<vector<int>> matrix(n, vector<int> (n));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> matrix[i][j]; 
			}
		}

		int src = 0, goal = 0;
		cin >> src >> goal;

		vector<int> visited(n,0);
		vector<int> cost(n, INT_MAX);
		vector<int> parent(n);
		int totalvisited = 0;
		cost[src] = 0;
		parent[src] = -1;
		vector<int> path;

		while(totalvisited < n) {
			if(src == goal) break;
			for(int i = 0; i < n; ++i) {
				if(matrix[src][i] != 0) {
					if(cost[src]+matrix[src][i] < cost[i])
						parent[i] = src;
					else if(cost[src]+matrix[src][i]==cost[i])
						parent[i] = min(src, parent[i]);
					cost[i] = min(cost[i], cost[src]+matrix[src][i]);
				}
			}
			visited[src] = 1;
			totalvisited++;

			src = mincostvert(cost, visited, src, n);
		}
		cout << cost[goal] << endl;
		int vert = goal;

		while(vert!=-1) {
			path.push_back(vert);
			vert = parent[vert];
		}
		reverse(path.begin(), path.end());
		for(auto it = path.begin(); it != path.end(); ++it) 
			cout << *it << " ";
		cout << endl;
	}
	return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
