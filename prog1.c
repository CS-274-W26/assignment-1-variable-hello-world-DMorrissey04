
/*Assignment 1 - Variable Hello World
 *Deklin Morrissey
 *morrisde@oregonstate.edu
 *Guyer
 *1/18/2026
 */
#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h> //for randomized int

int main() {
	srand(time(NULL)); 
	//set random seed based on time on clock
	int my_rand = rand() % 11; 
	//create an int with a random value of 10
	//Must be 11 so that 10 is within possible ints
	if (my_rand < 5) {
		//print the given value of my_rand and output the statement
		printf("Output number:%d \n Eat more beef, kick less cats\n", 
		my_rand);
	}
		
		//If my_rand is between 5 and 9
		else if (my_rand > 4 && my_rand < 10){
			printf("Output number:%d\n FRODO LIVES\n", 
			my_rand);

		}	
		//don't need else if statement when all scenarios are finished
		else {
			printf("Output number:%d\nLarn is the best Roguelike\n", 
			my_rand);
		}
	
}
