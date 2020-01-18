#include <limits.h> 
#include <stdio.h> 
int minDistance(int dist[], bool sptSet[],int n) 
{ 
	int min = INT_MAX, min_index; 
	for (int v = 0; v < n; v++) 
		if (sptSet[v] == false && dist[v] <= min) 
			min = dist[v], min_index = v; 
	return min_index; 
} 
int printSolution(int dist[],int n) 
{ 
	printf("Vertex \t\t Distance from Source\n"); 
	for (int i = 0; i < n; i++) 
		printf("%d \t\t %d\n", i, dist[i]); 
} 
void dijkstra(int graph[10][10], int src,int n) 
{ 
	int dist[n];
	int nn=n;
	bool sptSet[n];
	for (int i = 0; i < n; i++) 
		dist[i] = INT_MAX, sptSet[i] = false; 
	dist[src] = 0; 
	for (int count = 0; count < n - 1; count++) { 
		int u = minDistance(dist, sptSet,nn); 
		sptSet[u] = true; 
		for (int v = 0; v < n; v++) 
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
				&& dist[u] + graph[u][v] < dist[v]) 
				dist[v] = dist[u] + graph[u][v]; 
	} 
	printSolution(dist,n); 
} 
int main() 
{ 
	int graph[10][10],n; 
    printf("\n Enter the number of Vertex: ");
    scanf("%d",&n);
    printf("\n Enter the values: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
	dijkstra(graph,0,n); 
	return 0; 
} 
