/****************************************************
 * BFS (Breadth First Search) Traversal in C
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
    int vertex;            // Value of connected vertex
    struct node* next;     // Pointer to next node in list
};

/************* Graph structure *************/
struct Graph {
    int numVertices;
    struct node** adjLists;   // Array of linked lists
    int* visited;             // Visited array for BFS
};

/************* Create a linked list node *************/
struct node* createNode(int v) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

/************* Create graph with given number of vertices *************/
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));

    graph->numVertices = vertices;

    // Allocate memory for adjacency list array
    graph->adjLists = malloc(vertices * sizeof(struct node*));

    // Allocate memory for visited array
    graph->visited = malloc(vertices * sizeof(int));

    // Initialize all lists and visited array
    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;  // No edges yet
        graph->visited[i] = 0;      // Mark all as unvisited
    }

    return graph;
}

/************* Add edge (undirected graph) *************/
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge src → dest
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Add edge dest → src (because undirected)
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

/************* BFS Traversal *************/
void BFS(struct Graph* graph, int startVertex) {

    int queue[SIZE];
    int front = 0, rear = 0;

    // Mark start vertex as visited and enqueue it
    graph->visited[startVertex] = 1;
    queue[rear++] = startVertex;

    printf("BFS Traversal: ");

    // Loop until queue is empty
    while (front < rear) {

        // Dequeue vertex from queue
        int currentVertex = queue[front++];

        printf("%d ", currentVertex);

        // Visit all neighbors of currentVertex
        struct node* temp = graph->adjLists[currentVertex];

        while (temp != NULL) {
            int adjVertex = temp->vertex;

            if (graph->visited[adjVertex] == 0) {
                graph->visited[adjVertex] = 1;
                queue[rear++] = adjVertex; // Enqueue it
            }

            temp = temp->next;
        }
    }
}

/************* MAIN FUNCTION *************/
int main() {

    struct Graph* graph = createGraph(SIZE);

    // Creating the example graph:
    // 0–1, 0–2, 1–3, 1–4, 2–5
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 5);

    BFS(graph, 0);

    return 0;
}
