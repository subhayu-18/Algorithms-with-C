/*Name: Subhayu Sengupta
Dept.:CSE   Year:2nd    Sem:4th 
Class Roll: 7
Paper Name: Design & Analysis of Algorithms Lab
Paper Code: PCC-CS-494*/

//Checking the given weight is weighable or not

#include<stdio.h>
#include<stdlib.h>

int check(int, int [], int );

int main(){
    int n,i,w[10],d;
    printf("enter the number of weights:    ");
    scanf("%d",&n);
    printf("enter the weights:  ");
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);
    printf("enter the destination weight:   ");
    scanf("%d",&d);

    if(check(n,w,d))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}

int check(int n, int w[10], int d){
    int i,s=0;
    for (i=0;i<n;i++)
        s= s+w[i];
    if(d<=s)
        return 1;
    else
        return 0;
}