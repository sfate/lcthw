#include <stdio.h>

int main(int argc, char *argv[]) {
  int areas[]      = {10, 12, 13, 14, 20};
  char name[]      = "Patrick";
  char full_name[] = {'P', 'a', 't', 'r', 'i', 'c', 'k', ' ', 'R', '.', ' ', 'R', 'e', 'a', 'g', 'a', 'n', '\0'};

  areas[5] = 234;
  areas[7] = 200;
  name[0] = 'R';
  areas[6] = full_name[2];

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d, the 2nd %d, the 6th %d, the 7th %d, the 8th %d.\n", areas[0], areas[1], areas[5], areas[6], areas[7]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

  printf("The size of full_name: %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

  return 0;
}