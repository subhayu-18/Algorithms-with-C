 /*Name: Subhayu Sengupta
Dept.:CSE   Year:2nd    Sem:4th 
Class Roll: 7
Paper Name: Design & Analysis of Algorithms Lab
Paper Code: PCC-CS-494*/

//Solving single source shortest path problem using Bellman-Ford algorithm

#include<stdio.h>
#include<stdlib.h>

struct edge{
    char source, dest;
    int cost;
}e[50];

int bellmanFord();
int relax(struct edge);

int main(){
    int V,m,i,j,G[10][10]; char ver[10];
    printf("enter no. of vertices:");
    scanf("%d",&n);
    printf("enter the name of nodes\n");
    for(i=0;i<V;i++){
        scanf("%c",&ver[i]);
    }
    printf("enter the graph in matrix form\n");
    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            scanf("%d",&G[i][j]);
            if(G[i][j]!=0){
                e.source= i;
                e.dest = j;
            }
        }
    }

}

int bellmanFord(){

}