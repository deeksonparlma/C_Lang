//display even numbers from 1 -70
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int number;
  for (number = 1; number<= 70; number++) {
    if ((number%2) == 0) {
      printf("%d \n",number);
    }
  }
  return 0;
}
