/*Name: Subhayu Sengupta
Dept.:CSE   Year:2nd    Sem:4th 
Class Roll: 7
Paper Name: Design & Analysis of Algorithms Lab
Paper Code: PCC-CS-494*/

//Sum of n Natural numbers using recursion

#include<stdio.h>
#include<stdlib.h>

int sum(int);

int main(){
    int n;
    printf("enter the range:");
    scanf("%d",&n);
    printf("the sum of first %d natural numbers is %d.",n,sum(n));
    return 0;
}

int sum(int n){
    if(n==1)
        return 1;
    else
        return (n+sum(n-1));
}