#include <stdio.h>
int main(int argc, char const *argv[]) {
int number,counter =1,factorial=1;
printf("Enter a number to find factorial : ");
scanf("%d",&number );
while (counter<=number) {
   factorial *= counter;
   counter++;
}
  printf("\tThe factorial of %d is %d \n",number,factorial);
  return 0;
}
