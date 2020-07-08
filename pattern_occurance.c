//Name: Subhayu Sengupta
//Dept.:CSE, Year: 2nd, SEM: 4th, Class Roll: 7
//Paper name: Design & Analysis of Algorithms Lab
//Paper code: PCC-CS-494

// C program to find all occurrences of a pattern in a string.
#include <stdio.h> 
#include<stdlib.h>
#include <string.h> 

void find(char* pat, char* txt) 
{ 
    int m,n,i,j;
	m = strlen(pat); 
	n = strlen(txt); 

	// A loop to slide pat[] one by one
	for (i = 0; i <= n - m; i++) {
		for (j = 0; j < m; j++) 
			if (txt[i + j] != pat[j]) 
				break; 

		if (j == m)
			printf("Pattern occurs with shift %d \n", i); 
	} 
} 

int main() 
{ 
	char pat[50],txt[50];
    printf("P=");
    gets(pat);
    printf("T=");
    gets(txt);
	find(pat, txt); 
	return 0; 
} 
