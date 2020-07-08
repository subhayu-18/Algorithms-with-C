/*Name: Subhayu Sengupta
Dept.:CSE   Year:2nd    Sem:4th 
Class Roll: 7
Paper Name: Design & Analysis of Algorithms Lab
Paper Code: PCC-CS-494*/

//Solve the Tower of Hanoi problem using Recursion

#include<stdio.h>
#include<stdlib.h>

void towerOfHanoi(int,char,char,char);

void main(){
	int n;
    printf("Enter number of disks:");
    scanf("%d",&n);
	towerOfHanoi(n, 'A', 'C', 'B');
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) { 
	if (n == 1){ 
	    printf("Shift disk 1 from rod %c to rod %c\n", from_rod, to_rod); 
		return; 
	} 
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
	printf("Shift disk %d from rod %c to rod %c\n", n, from_rod, to_rod); 
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
} 