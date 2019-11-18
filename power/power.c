//-lm
#include <stdio.h>
#include <math.h>
int power(int A,int B);
int main(int argc, char const *argv[])
{
  int Num1,Num2;
  printf("Enter a number : ");
  scanf("%d",&Num1 );

  printf("Enter the power : ");
  scanf("%d",&Num2 );
  printf("%d to the power of %d is %d\n",Num1,Num2,power(Num1,Num2));
  return 0;
}
int power(int A,int B)
{
  return pow(A,B);
}
