// Lacy Hayes
// COP 3223C MWF
// 10.16.20
// Assignment 3 - Program 2
 
// program will output one-hundred elements of an array to 10 columns that are 6 spaces wide
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main () {
srand(time(0));
// declaring array
double num[100];
// assigning variable i to be an integer
int i;
// for loop to assign each double a random number between 0.50 and 50.00
for(i =0; i<100; ++i) {
num[i] = (double) (rand() % 100 + 1) / 2.0; 	
}
 
// for loop that will print each of the elements in the array
for (i = 0; i<100; ++i) {
printf("%.2f       ", num[i]);

// if statement to create columns
if((i+1)%10 == 0) {
printf("\n");
}	
}	
return 0;		
}

