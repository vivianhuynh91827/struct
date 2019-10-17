#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"

void example(){
  char* names[] = {"unicorn879","fireboy839",
                  "epic345","xxhelloxx", "santaclaus234","12bear34"};
  int ind = rand() % 6;
  struct player ex;
  ex.name = names[ind];
  ex.level = (rand() % 100) + 1;
  printf("Player: {%d, %s}\n",ex.level,ex.name);
}

void print(struct player person){
  printf("Player's Username: %s\n", person.name);
  printf("Player's Level: %d\n", person.level);
}

void change(struct player *person, char* newName, int newLevel){
  // struct player new;
  person -> name = newName;
  person -> level = newLevel;
  // person = new;
}
