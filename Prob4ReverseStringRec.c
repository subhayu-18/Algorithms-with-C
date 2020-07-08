/*Name: Subhayu Sengupta
Dept.:CSE   Year:2nd    Sem:4th 
Class Roll: 7
Paper Name: Design & Analysis of Algorithms Lab
Paper Code: PCC-CS-494*/

//Reverse a string using Recursion

#include<stdio.h>
#include<stdlib.h>

void reverse(char* begin, char* end){
    if(begin > end)
        return ;
    else{
        char temp = *begin;
        *begin = *end;
        *end = temp;
        reverse(begin+1,end-1);
    }
}

void reverse_word(char* start, char* begin ,char* end){
    if(*end=='\0'){ 
        reverse(begin,end-1);
        begin = end+1;
        reverse(start,end-1); 
        return ;
    }
    if(*end==' '){  
        reverse(begin,end-1);
        begin =end+1;
    }
    reverse_word(start,begin,end+1);
}
int main(){
    char sen[100];
    printf("enter the string:   ");
    gets(sen);
    reverse_word(sen,sen,sen);
    puts(sen);

    return 0;
}