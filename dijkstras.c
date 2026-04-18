#include<stdio.h>

int main() {
    int n, i, j, u;
    int graph[10][10], dist[10], visited[10];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    // Initialize
    for(i = 0; i < n; i++) {
        dist[i] = 9999;
        visited[i] = 0;
    }

    dist[0] = 0; // start from node 0

    // Dijkstra logic
    for(i = 0; i < n; i++) {

        int min = 9999;
        for(j = 0; j < n; j++) {
            if(!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }
        }

        visited[u] = 1;

        for(j = 0; j < n; j++) {
            if(graph[u][j] && dist[u] + graph[u][j] < dist[j]) {
                dist[j] = dist[u] + graph[u][j];
            }
        }
    }

    printf("Shortest distances:\n");
    for(i = 0; i < n; i++)
        printf("%d -> %d = %d\n", 0, i, dist[i]);

    return 0;
}