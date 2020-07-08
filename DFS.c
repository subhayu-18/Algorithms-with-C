#include<stdio.h>
 
void DFS(int);
int admat[10][10],visited[10],n; //admat[][] for adjacency matrix
 
void main()
{
    int i,j,v;
    printf("Enter number of vertices:");
    scanf("%d",&n);

    //read the adjacency matrix for the given graph
	printf("\nEnter adjecency matrix of the graph:");
	for(i=0;i<n;i++){
       for(j=0;j<n;j++)
			scanf("%d",&admat[i][j]);
    }
    for(i=0;i<n;i++)
        visited[i]=0;
    
    //read the vertex from where to start the traversal
    printf("enter the starting vertex:");
    scanf("%d",&v);
    
    printf("the required sequence is\n");
    DFS(v-1);
}
 
void DFS(int v)
{
    int j;
	printf("\n%d\t",v+1);
    visited[v]=1;
	
	for(j=0;j<n;j++){
       if(!visited[j] && admat[v][j]==1)
            DFS(j);
    }
}