#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int digit=n%10;
	if(digit>5){
		printf("The last digit of %d is %d and is greater than 5\n",n,digit);
	}
	else if(digit==0){
		printf("The last digit of %d is %d and is equal to zero\n",n,digit);
	}
	else if(digit <6){
		printf("The last digit of %d is %d and is less than 6 and not zero\n",n,digit);
	}
	return (0);
}
