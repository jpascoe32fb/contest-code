Given an adjacency matrix representation of a graph, compute the shortest path from a source vertex to a goal vertex using Dijkstra’s algorithm. In the adjacency matrix, 0 represents absence of edge, while non-zero represents the weight of the edge. All edge weights are integers. In case of a tie, a smaller indexed vertex should be preferable to a larger indexed vertex.

Input: The first line is the number of test cases. Thereafter, for every test case, the first line of input is n, the number of vertices in the graph. Then n lines of inputs have n integers each, separated by a space, denoting the adjacency matrix. The next line of input is the index of source and goal, the indexing starts from 0.

Output: The first line of output is the cost of shortest path from source to goal. The second line of output is the path from source to goal (including both source and goal).

Sample Input:
1
5
0 3 2 0 0
3 0 5 3 0
2 5 0 0 20
0 3 0 0 4
0 0 20 4 0
0 4

Sample Output:
10
0 1 3 4