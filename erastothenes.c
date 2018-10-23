#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//const int num_vals =1000000*log(1000000)*1.15; //Total number of values to look at
//int primeList[1000000]; //We want millionth prime number
//int *integers = calloc(num_vals, sizeof(int));
/*Note: I gave up on trying a 2D array.  I can't seem to have gotten it working.*/


int sieve(int target_prime){
  int num_vals = target_prime*log(target_prime)*1.15;
  int * integers = calloc(num_vals, sizeof(int));
  for (int i = 2; i < num_vals; i++){
    integers[i] = 1;
  }

  for (int i = 2; i < num_vals; i++){
    if (*(integers + i)){
      target_prime--;
      if (target_prime == 0){
	free(integers);
	return i;
      }
      for (int j = i; j < num_vals; j = j + i){
	if (*(integers+j)){
	  *(integers+j) = 0;
	}
      }

    }
  }
  free(integers);
  return 0;
}
    
  
void initialize(){
}

/*
void calc_primes(){
  int primeNo = 0;
  numVals[0][1] = 1;
  for (int i = 2; i < numVals; i++){
    for (int j = 2; j < numVals; j++){
      integers[i*j][1] = 2;
    }
  }
  for (int i = 2;*/
int main(){
  printf("%d\n",sieve(1000000));
  return 0;
}
