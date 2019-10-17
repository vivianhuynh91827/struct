#include <stdlib.h>
#include <stdio.h>
#include "struct.h"
#include <time.h>

int main(){
  srand(time(NULL));
  printf("------------START------------\n");
  printf("\n");
  printf("Examples:\n");
  example();
  example();
  example();
  printf("\n");

  printf("Testing print Function:\n");
  struct player test;
  test.name = "hello_world1234";
  test.level = 24;
  struct player* test2 = &test;
  print(test);
  printf("\n");

  printf("Testing set Function:\n");
  printf("Original player:\n");
  print(test);
  printf("Changed player:\n");
  change(test2,"bigboi345",72);
  print(test);
  printf("\n");
  printf("---------TESTING-OVER---------\n");
}
