#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

#define ROW 3
#define COLUMN 5

int main()
{
	char input; 
	int matrix[ROW][COLUMN], upper, lower, digits;
	time_t t;
	srand((unsigned) time(&t));

	intial_point:
	printf("[*] Number digits(0,5]: ");
	scanf("%d", &digits);
	switch(digits)
	{
		case 1:
			upper = 9;
			lower = 1;
			break;

		case 2:
			upper = 99;
			lower = 10;
			break;

		case 3:
			upper = 999;
			lower = 100;
			break;

		case 4:
			upper = 9999;
			lower = 1000;
			break;

		case 5:
			upper = 99999;
			lower = 10000;
			break;

		default:
			printf("[!] Invalid input::input range must be (0,5]");
			return 1;
	}

	int testno = 0;
	while(testno != 3){
		system("clear");
		printf("Test #%d:\n", testno+1);
		sleep(3);
		for(int i = 0; i < 5; i++)
		{
			int blinks = (rand() % ((upper - lower) + 1)) + lower;
			matrix[testno][i] = blinks;
			system("clear");
			printf("|--------------------|\n");
			printf("         %d          \n", blinks);
			printf("|--------------------|\n");
			sleep(1);
		}
		testno += 1;
	}

	system("clear");
	for(int i = 0; i < testno; i++)
	{
		printf("Test #1: ");
		for(int j = 0; j < 5; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	goto intial_point;

}
