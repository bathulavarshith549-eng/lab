#include <stdio.h>

int main() {
    // Adjacency matrix for graph
    int g[5][5] = {
        {0,1,1,0,0}, // A
        {1,0,0,1,1}, // B
        {1,0,0,0,1}, // C
        {0,1,0,0,0}, // D
        {0,1,1,0,0}  // E
    };

    int visited[5] = {0};
    int q[5], front = 0, rear = 0;

    // Start from node A (index 0)
    visited[0] = 1;
    q[rear++] = 0;

    while (front < rear) {
        int u = q[front++];

        for (int v = 0; v < 5; v++) {
            if (g[u][v] && !visited[v]) {
                visited[v] = 1;
                printf("%c -> %c\n", u+'A', v+'A'); // tree edge
                q[rear++] = v;
            }
        }
    }

    return 0;
}