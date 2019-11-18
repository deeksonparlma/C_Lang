/*multiplication.c
program for multiplication table where upto the 25th table
input : 6
1 * 6 ---- 25 * 6
*/
#include <stdio.h>
#include <math.h>
int multiply(int A,int B);
int main(int argc, char const *argv[])
{
  int number,topCount=25,i=1;

  printf("Enter a  number to find its multiplication table : ");
  scanf("%d",&number);

  while (i<=topCount) {
    printf("\t%d x %d = %d \n",number,i,multiply(number,i));
    i++;
  }
  return 0;
}
int multiply(int A,int B)
{
  return (A*B);
}
