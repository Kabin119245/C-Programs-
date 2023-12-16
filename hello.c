#include<stdio.h>
#define MAX 5 
int main() 
{ 
int Case[MAX]={2,3,5,4,10},i,sum=0; 
float average;
for(i=0; i<MAX; i+=1)
{
    printf("Case %d = %3.2d\n", i, Case[i]); 
sum += Case[i]; 
} 
average = sum/MAX; 
printf("%06.2f", average); 
return 1; 
}