/* GRAPH COLORING USING BACKTRACKING */



#include<stdio.h>

int m, n, g[50][50],x[50];
int c=0,count=0;



void NextValue(int k);

void mcoloring(int k);



void main()

{

 int i, j;

 printf("\nEnter the number of nodes: " );

 scanf("%d", &n);

 printf("\nEnter Adjacency Matrix:\n");

 for(i=1;i<=n;i++)

 {

  for(j=1;j<=n;j++)

  {

   scanf("%d", &g[i][j]);

  }

 }



 printf("\nPossible Solutions are\n");



 for(m=1;m<=n;m++)

 {

  if(c==1)

  {

   break;

  }

  mcoloring(1);

 }



 printf("\nThe chromatic number is %d", m-1);

 printf("\nThe total number of solutions is %d", count);

}





void mcoloring(int k)

{

 int i;

 while(1)

 {

  NextValue(k);

  if(x[k]==0)

  {

   return;

  }



 if(k==n)

 {

  c=1;

  for(i=1;i<=n;i++)

  {

   printf("%d ", x[i]);

  }

  count++;

  printf("\n");

 }

 else

  mcoloring(k+1);



 }

}





void NextValue(int k)

{

 int j;

 while(1)

 {

  x[k]=(x[k]+1)%(m+1);

  if(x[k]==0)

  {

   return;

  }

  for(j=1;j<=n;j++)

  {

   if(g[k][j]==1&&x[k]==x[j])

    break;

  }

  if(j==(n+1))

  {

   return;

  }

 }

}