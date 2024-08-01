### Dijkstra's Algorithm C Program Documentation

#### Files and Functions

### File: `dijkstra.c`

#### Functions:
1. **main()**: Initializes the graph, takes input from the user, and calls the `dijkstra` function.
2. **dijkstra()**: Implements Dijkstra's algorithm to find the shortest path from a starting node to all other nodes in the graph.

### Detailed Function Descriptions

#### `main()`
- **Description**: The main function is the entry point of the program. It initializes the graph, takes the number of vertices, the adjacency matrix, and the starting node as input from the user. It then calls the `dijkstra` function to compute the shortest paths.
- **Parameters**: None.
- **Return Value**: Returns `0` to indicate successful execution.

**Code Explanation**:
```c
int main() {
    int G[MAX][MAX], i, j, n, u;
    printf("Enter no. of vertices:");        // Prompt user to enter number of vertices
    scanf("%d", &n);                         // Read number of vertices
    printf("\nEnter the adjacency matrix:\n");
    
    for (i = 0; i < n; i++)                  // Read the adjacency matrix
        for (j = 0; j < n; j++)
            scanf("%d", &G[i][j]);
    
    printf("\nEnter the starting node:");    // Prompt user to enter the starting node
    scanf("%d", &u);                         // Read starting node
    dijkstra(G, n, u);                       // Call dijkstra function with graph, number of vertices, and starting node
    
    return 0;                                // Return 0 to indicate successful execution
}
```

#### `dijkstra()`
- **Description**: This function implements Dijkstra's algorithm to find the shortest path from a starting node to all other nodes in the graph. It uses a cost matrix to store the distances, an array to store the shortest distance from the starting node to each node, and a predecessor array to store the shortest path tree. It also maintains a visited array to keep track of the visited nodes.
- **Parameters**:
  - `G[MAX][MAX]`: The adjacency matrix of the graph.
  - `n`: The number of vertices in the graph.
  - `startnode`: The starting node for the algorithm.
- **Return Value**: None.

**Code Explanation**:
```c
void dijkstra(int G[MAX][MAX], int n, int startnode) {
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, mindistance, nextnode, i, j;

    // Create the cost matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (G[i][j] == 0)
                cost[i][j] = INFINITY;        // If there's no edge, set cost to INFINITY
            else
                cost[i][j] = G[i][j];         // Otherwise, set cost to the edge weight
    
    // Initialize pred[], distance[], and visited[]
    for (i = 0; i < n; i++) {
        distance[i] = cost[startnode][i];     // Distance from startnode to i
        pred[i] = startnode;                  // Predecessor of i is startnode
        visited[i] = 0;                       // Initially, no node is visited
    }
    
    distance[startnode] = 0;                  // Distance to startnode is 0
    visited[startnode] = 1;                   // Mark startnode as visited
    count = 1;                                // Count of visited nodes
    
    while (count < n - 1) {
        mindistance = INFINITY;

        // Find the next node with the minimum distance
        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }

        visited[nextnode] = 1;                // Mark nextnode as visited

        // Check if a better path exists through nextnode
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;        // Update predecessor of i to nextnode
                }

        count++;
    }

    // Print the path and distance of each node
    for (i = 0; i < n; i++)
        if (i != startnode) {
            printf("\nDistance of node %d = %d", i, distance[i]);
            printf("\nPath = %d", i);

            j = i;
            do {
                j = pred[j];
                printf(" <- %d", j);          // Print the path
            } while (j != startnode);
        }
}
```

### Summary
The provided program implements Dijkstra's algorithm to find the shortest paths from a given starting node to all other nodes in a graph. The user inputs the number of vertices, the adjacency matrix of the graph, and the starting node. The program then calculates and prints the shortest distances and paths to all other nodes using Dijkstra's algorithm. The documentation explains each function's purpose, parameters, return values, and provides a detailed code explanation.