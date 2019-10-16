#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "struct.h"

void example(){
  char* names[] = {"unicorn879","fireboy839",
                  "epic345","xxhelloxx", "santaclaus234","12bear34"};
  srand(time(NULL));
  int ind = rand() % 6;
  struct player ex;
  ex.name = names[ind];
  ex.level = (rand() % 100) + 1;
  printf("Example player: {%d, %s}\n",ex.level,ex.name);
}

void toString(struct player person){
  printf("Player's Username: %s\n", person.name);
  printf("Player's Level: %d\n", person.level);
}

void set(struct player person, char* newName, int newLevel){
  person.name = newName;
  person.level = newLevel;
}
