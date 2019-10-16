#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int main(){
  printf("------------START------------\n");
  printf("\n");
  example();
  printf("\n");
  printf("Testing toString Function:\n");
  struct player test;
  test.name = "hello_world1234";
  test.level = 24;
  toString(test);
  printf("\n");
  printf("Testing set Function:\n");
  printf("Original player:\n");
  toString(test);
  printf("Changed player:\n");
  set(test,"bigboi345",72);
  toString(test);
  printf("\n");
  printf("---------TESTING-OVER---------\n");
}
