#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int* decryptPointer(int array[], int length, int *key[]){

  int out[length];
  int* decrypt = (int*)malloc(2*sizeof(int));
//a loop that sums element that key points to, to the coresponding elemnts in array
  for(int i = 0; i < length; i++){
   out[i]= *key[i] + array[i];
    
  }
  
//loop to store elements in out to decrypt.
for(int i = 0; i < length; i++){
  printf("%i\n", out[i]);
  decrypt[i] = out[i];
}
  return decrypt;


}
