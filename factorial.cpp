 
#include "functions.h"
#include "cstdlib"
#include "stdio.h"
using namespace std;

int check(int n)
{
	while(n < 1)
	{

		printf("Give a number greater than 0\n");
		scanf("%d",&n);
	}
	return n;
}
int factorial(int n){
	if(n<0){
		printf("Enter a positive number to find factorial\n");
		return 0;
	}
	n = check(n);
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
