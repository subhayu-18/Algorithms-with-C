/*Name: Subhayu Sengupta
Dept.:CSE   Year:2nd    Sem:4th 
Class Roll: 7
Paper Name: Design & Analysis of Algorithms Lab
Paper Code: PCC-CS-494*/

//Compute y=x^n where x and n are given

#include<stdio.h>
#include<stdlib.h>

double getPow(double,int);

int main(){
    int y; double x; int n;
    printf("enter the value of x:   ");
    scanf("%lf",&x);
    printf("enter the power:    ");
    scanf("%d",&n);
    y=(int)getPow(x,n);
    printf("the value of y = %d",y);

    return 0;
}

double getPow(double x,int n){
    if(n==0)
        return 1;
    else if (n>0)
    {
        return x*getPow(x,n-1);
    }
    else
    {
        return 1/getPow(x, -1*n);
    }
}