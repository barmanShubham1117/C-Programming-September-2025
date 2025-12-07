/****************************************************
 * DFS (Depth First Search) Traversal in C
 Graph structure:

     0
    / \
   1   2
  / \   \
 3   4   5
 ****************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6   // Total vertices = 6 (0 to 5)

/************* Node structure for adjacency list *************/
struct node {
    int vertex;
    struct node* next;
};

/************* Graph structure *************/
struct Graph {
    int numVertices;
    struct node** adjLists;
    int* visited;
};

/************* Create a node *************/
struct node* createNode(int v) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

/************* Create graph *************/
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));

    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node*));
    graph->visited = malloc(vertices * sizeof(int));

    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

/************* Add undirected edge *************/
void addEdge(struct Graph* graph, int src, int dest) {
    // src → dest
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // dest → src
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

/************* DFS Function (Recursive) *************/
void DFS(struct Graph* graph, int vertex) {
    
    // Mark current node as visited
    graph->visited[vertex] = 1;

    printf("%d ", vertex);

    // Visit all neighbors one by one
    struct node* temp = graph->adjLists[vertex];

    while (temp != NULL) {
        int connectedVertex = temp->vertex;

        // If neighbor not visited, go deeper
        if (graph->visited[connectedVertex] == 0)
            DFS(graph, connectedVertex);

        temp = temp->next;
    }
}

/************* MAIN FUNCTION *************/
int main() {

    struct Graph* graph = createGraph(SIZE);

    // Same graph as BFS example
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 5);

    printf("DFS Traversal: ");
    DFS(graph, 0);

    return 0;
}
