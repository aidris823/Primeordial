#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

const int numVals = 1000000*log(1000000)*1.15; //Total number of values to look at
int primeList[1000000]; //We want millionth prime number
int integers[numVals][2];

void initialize(){
  for (int i = 2; i < numVals; i++){
    integers[i][0] = i;
    integers[i][1] = 0;
    //0 = Unchecked
    //1 = Prime
    //2 = Composite
  }
}

void calcPrimes(){
  int primeNo = 0;
  numVals[0][1] = 1;
  for (int i = 2; i < numVals; i++){
    for (int j = 2; j < numVals; j++){
      integers[i*j][1] = 2;
    }
  }
  for (int i = 2; i < numVals; i++){
    if (integers[i][1] != 2){
      primeList[primeNo] = integers[i][0];
      primeNo++;
    }
  }
}

int main(){
  
  return 0;
}
